//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit7.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	bool checker = true;
	ADOQuery1->First();
	while(!ADOQuery1->Eof){
		if(ADOQuery1->FieldByName("�����")->AsString == Edit1->Text && ADOQuery1->FieldByName("����������_�������")->AsString == Edit2->Text ){
			checker = false;
		}
		ADOQuery1->Next();
	}
	if(checker == true){

		ADOQuery1->Insert();
		ADOQuery1->FieldByName("�����")->AsString = Edit1->Text;
		ADOQuery1->FieldByName("����������_�������")->AsString = Edit2->Text;
		ADOQuery1->FieldByName("�����������_������_���_�������")->AsInteger = StrToInt(Edit3->Text);
		ADOQuery1->FieldByName("���������_������")->AsInteger = StrToInt(Edit4->Text);
		ADOQuery1->FieldByName("������_����")->AsString = ComboBox1->Text;
		ADOQuery1->FieldByName("�����")->AsString = ComboBox2->Text;
		ADOQuery1->Post();
        ADOQuery1->Refresh();

		Label1->Visible = true;
		Timer1->Enabled = true;
		Edit1->Clear();
		Edit2->Clear();
		Edit3->Clear();
        Edit4->Clear();
	}
	else{
		ShowMessage("������ ����� ��� ��������� � ���� ������!");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Timer1Timer(TObject *Sender)
{
	Label1->Visible = false;
	Timer1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Timer2Timer(TObject *Sender)
{
	UnicodeString s;
	bool add = true;
	Form3->ADOQuery1->First();
	 while(!Form3->ADOQuery1->Eof){
		if(Form3->ADOQuery1->Fields->FieldByName("��������_������")->AsString != ""){
		s = Form3->ADOQuery1->Fields->FieldByName("��������_������")->AsString;
			for(int i = 0;i<ComboBox2->Items->Count;i++){
				if(s == ComboBox2->Items->Strings[i]){
					add = false;
				}
			}
		}
		if(add == false){
			Form3->ADOQuery1->Next();
			add = true;
		}
		else{
            Form8->ComboBox4->Items->Add(s);
			ComboBox2->Items->Add(s);
			Form3->ADOQuery1->Next();
		}
	 }
}
//---------------------------------------------------------------------------


void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
    Edit4->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	if(!isdigit(Key) || Key == '-'){
	   Key = 0;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit4KeyPress(TObject *Sender, System::WideChar &Key)
{
    if(!isdigit(Key) || Key == '-'){
	   Key = 0;
	}
}
//---------------------------------------------------------------------------


