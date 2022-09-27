//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit5.h"
#include "Unit8.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	bool checker = true;
	ADOQuery1->First();
	while(!ADOQuery1->Eof){
		if(ADOQuery1->FieldByName("���")->AsString == Edit1->Text){
			checker = false;
		}
		ADOQuery1->Next();
	}
	if(checker == true){

		ADOQuery1->Insert();
		ADOQuery1->FieldByName("���")->AsString = Edit1->Text;
		ADOQuery1->FieldByName("�������")->AsString = Edit2->Text;
		ADOQuery1->FieldByName("���������_������")->AsString = ComboBox1->Text;
		ADOQuery1->Post();
		Label1->Visible = true;
		Timer1->Enabled = true;

	}
	else{
		ShowMessage("������ ������� ��� ��������� � ���� ������!");
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Timer1Timer(TObject *Sender)
{
    Label1->Visible = false;
	Timer1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Timer2Timer(TObject *Sender)
{
	UnicodeString s;
	bool add = true;
	Form5->ADOQuery1->First();
	 while(!Form5->ADOQuery1->Eof){
		if(Form5->ADOQuery1->Fields->FieldByName("������������_������")->AsString != ""){
		s = Form5->ADOQuery1->Fields->FieldByName("������������_������")->AsString;
			for(int i = 0;i<ComboBox1->Items->Count;i++){
				if(s == ComboBox1->Items->Strings[i]){
					add = false;
				}
			}
		}
		if(add == false){
			Form5->ADOQuery1->Next();
			add = true;
		}
		else{
			Form8->ComboBox2->Items->Add(s);
			ComboBox1->Items->Add(s);
			Form5->ADOQuery1->Next();
		}
	 }
}

//---------------------------------------------------------------------------

void __fastcall TForm6::FormClose(TObject *Sender, TCloseAction &Action)
{
	Edit1->Clear();
    Edit2->Clear();
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	if(!isdigit(Key) || Key == '-'){
	   Key = 0;
	}
}
//---------------------------------------------------------------------------



