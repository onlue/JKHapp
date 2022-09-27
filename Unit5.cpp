//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
	bool checker = true;
	ADOQuery1->First();
	while(!ADOQuery1->Eof){
		if(ADOQuery1->FieldByName("������������_������")->AsString == Edit1->Text){
			checker = false;
		}
		ADOQuery1->Next();
	}
	if(checker == true){

		ADOQuery1->Insert();
		ADOQuery1->FieldByName("������������_������")->AsString = Edit1->Text;
		ADOQuery1->Post();
		Label1->Visible = true;
		Timer1->Enabled = true;

	}
	else{
		ShowMessage("������ ������ ��� ��������� � ���� ������!");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Timer1Timer(TObject *Sender)
{
	Label1->Visible = false;
	Timer1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
    Edit1->Clear();
}
//---------------------------------------------------------------------------

