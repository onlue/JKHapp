//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit8.h"
#include "Unit2.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{   bool checker = true;
	int counter = 0;
	ADOQuery1->First();
	while(!ADOQuery1->Eof){
		if(ADOQuery1->FieldByName("��������_������")->AsString == Edit1->Text){
			checker = false;
		}
		counter++;
		ADOQuery1->Next();
	}
	if(checker == true){

		ADOQuery1->Insert();
		ADOQuery1->FieldByName("�����_������")->AsString = IntToStr(counter+1);
		ADOQuery1->FieldByName("��������_������")->AsString = Edit1->Text;
		ADOQuery1->Post();
		Label1->Visible = true;
		Timer1->Enabled = true;

	}

	else{
		ShowMessage("������ ����� ��� ��������� � ���� ������!");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
	Label1->Visible = false;
	Timer1->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
    Edit1->Clear();
}
//---------------------------------------------------------------------------

