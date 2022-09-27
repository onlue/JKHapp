//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include "Unit1.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::FormCloseQuery(TObject *Sender, bool &CanClose)
{
	Form1->Visible = true;

}
//---------------------------------------------------------------------------

int _ScrollFix = 0;
void __fastcall TForm10::FormMouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
		  bool &Handled)
{
   if(_ScrollFix % 5 == 0){
	DBCtrlGrid1->DoKey(gkScrollDown);
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm10::FormMouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled)
{
  if(_ScrollFix % 5 == 0){
	DBCtrlGrid1->DoKey(gkScrollUp);
   }
}
//---------------------------------------------------------------------------



void __fastcall TForm10::N1Click(TObject *Sender)
{
    Form7->ADOQuery1->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::N2Click(TObject *Sender)
{
   ShowMessage("������ ������ ���� �� ���������� ������ �������� ���� ��������");
}
//---------------------------------------------------------------------------

void __fastcall TForm10::ComboBox1Change(TObject *Sender)
{
    if(ComboBox1->Text == "�� ���� ������ �����"){
		Form7->ADOQuery1->Active=false;
		Form7->ADOQuery1->SQL->Text = "select * from �������_������ ORDER BY ����_������_����� ASC";
		Form7->ADOQuery1->Active=true;
	}
	if(ComboBox1->Text == "�� ���� ��������� �����"){
		Form7->ADOQuery1->Active=false;
		Form7->ADOQuery1->SQL->Text = "select * from �������_������ ORDER BY ����_���������_����� ASC";
		Form7->ADOQuery1->Active=true;
	}
	if(ComboBox1->Text =="�� �������� (���������)"){
		Form7->ADOQuery1->Active=false;
		Form7->ADOQuery1->SQL->Text = "select * from �������_������ ORDER BY ���_����� ASC";
		Form7->ADOQuery1->Active=true;
	}
	if(ComboBox1->Text == "�� ����������� ����"){
        Form7->ADOQuery1->Active=false;
		Form7->ADOQuery1->SQL->Text = "select * from �������_������ ORDER BY ����_����� ASC";
		Form7->ADOQuery1->Active=true;
	}
	if(ComboBox1->Text == "�������� ����������"){
        Form7->ADOQuery1->Active=false;
		Form7->ADOQuery1->SQL->Text = "select * from �������_������";
		Form7->ADOQuery1->Active=true;
	}
}
//---------------------------------------------------------------------------

