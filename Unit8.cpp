//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit1.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::FormCloseQuery(TObject *Sender, bool &CanClose)
{
	Form1->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::ComboBox1Change(TObject *Sender)
{
	if (ComboBox1->Text == "������"){
		DBCtrlGrid1->Visible = true;
		DBCtrlGrid2->Visible = false;
		DBCtrlGrid3->Visible = false;
		DBCtrlGrid4->Visible = false;
	}
	if (ComboBox1->Text == "�������"){
		DBCtrlGrid1->Visible = false;
		DBCtrlGrid2->Visible = true;
		DBCtrlGrid3->Visible = false;
		DBCtrlGrid4->Visible = false;
	}
	if (ComboBox1->Text == "���������") {
		DBCtrlGrid1->Visible = false;
		DBCtrlGrid2->Visible = false;
		DBCtrlGrid3->Visible = true;
		DBCtrlGrid4->Visible = false;
	}
	if (ComboBox1->Text == "����"){
		DBCtrlGrid4->Visible = true;
		DBCtrlGrid1->Visible = false;
		DBCtrlGrid2->Visible = false;
		DBCtrlGrid3->Visible = false;
	}
	ComboBox2->Visible = false;
	ComboBox3->Visible = false;
	ComboBox4->Visible = false;
	Edit1->Visible = false;
	Edit2->Visible = false;
	Edit3->Visible = false;
	Edit4->Visible = false;
	Button2->Visible = false;
	Button3->Visible = false;
	Button4->Visible = false;
    Button5->Visible = false;
}
//---------------------------------------------------------------------------

int _ScrollFix = 0;

void __fastcall TForm8::FormMouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
		  bool &Handled)
{
	_ScrollFix++;
	if( _ScrollFix %5==0){

		DBCtrlGrid1->DoKey(gkScrollDown);
		DBCtrlGrid2->DoKey(gkScrollDown);
		DBCtrlGrid3->DoKey(gkScrollDown);
		DBCtrlGrid4->DoKey(gkScrollDown);

	}

}

//---------------------------------------------------------------------------

void __fastcall TForm8::FormMouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled)
{
	_ScrollFix++;
	if(_ScrollFix %5==0){
		DBCtrlGrid1->DoKey(gkScrollUp);
		DBCtrlGrid2->DoKey(gkScrollUp);
		DBCtrlGrid3->DoKey(gkScrollUp);
		DBCtrlGrid4->DoKey(gkScrollUp);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button1Click(TObject *Sender)
{
	ADOQuery11->Active = false;
	ADOQuery11->Active = true;
	ADOQuery1->Active = false;
	ADOQuery1->Active = true;
	ADOQuery2->Active = false;
	ADOQuery2->Active = true;
	ADOQuery3->Active = false;
	ADOQuery3->Active = true;
}
//---------------------------------------------------------------------------



void __fastcall TForm8::MenuItem5Click(TObject *Sender)
{
  ADOQuery11->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::N1Click(TObject *Sender)
{
    ADOQuery3->Delete();
}
//---------------------------------------------------------------------------


void __fastcall TForm8::MenuItem3Click(TObject *Sender)
{
	ADOQuery1->Delete();
}
//---------------------------------------------------------------------------
void __fastcall TForm8::MenuItem6Click(TObject *Sender)
{
	Edit1->Visible = true;
    Edit1->TextHint = "�������� ������";
    Button2->Visible = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button2Click(TObject *Sender)
{
	ADOQuery11->Edit();
	ADOQuery11->FieldByName("��������_������")->AsString = Edit1->Text;
	ADOQuery11->Post();
	Edit1->Clear();
	Edit1->Visible = false;
	Button2->Visible = false;
}
//---------------------------------------------------------------------------





void __fastcall TForm8::N4Click(TObject *Sender)
{
 Edit1->Visible = true;
 Edit1->TextHint = "������������ ������";
 Button4->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button4Click(TObject *Sender)
{
	ADOQuery2->Edit();
	ADOQuery2->FieldByName("������������_������")->AsString = Edit1->Text;
	ADOQuery2->Post();
	Edit1->Clear();
	Edit1->Visible = false;
	Button4->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::MenuItem2Click(TObject *Sender)
{
 Edit1->Visible = true;
						  Edit1->TextHint = "���";
	Edit2->Visible = true;
						  Edit2->TextHint = "�������";
	ComboBox2->Visible = true;
	Button3->Visible = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm8::N3Click(TObject *Sender)
{
   	ADOQuery2->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button3Click(TObject *Sender)
{
	ADOQuery1->Edit();
	ADOQuery1->FieldByName("���")->AsString = Edit1->Text;
	ADOQuery1->FieldByName("�������")->AsString = Edit2->Text;
	ADOQuery1->FieldByName("���������_������")->AsString = ComboBox2->Text;
	ADOQuery1->Post();
	Edit1->Clear();
	Edit2->Clear();
	Edit1->Visible = false;
	Edit2->Visible = false;
	ComboBox2->Visible = false;
	Button3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::MenuItem1Click(TObject *Sender)
{
    ADOQuery1->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::N2Click(TObject *Sender)
{
	Edit1->Visible = true;
	Edit1->TextHint = "�����";
	Edit2->Visible = true;
	Edit2->TextHint = "���-�� �������";
	ComboBox3->Visible = true;
	Edit3->Visible = true;
	Edit3->TextHint = "����� $ ��� �������";
	ComboBox4->Visible = true;
	Edit4->Visible = true;
	Edit4->TextHint = "�������� ��� �������";
    Button5->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button5Click(TObject *Sender)
{
	ADOQuery3->Edit();

	ADOQuery3->FieldByName("�����")->AsString = Edit1->Text;
	ADOQuery3->FieldByName("����������_�������")->AsString = Edit2->Text;
	ADOQuery3->FieldByName("������_����")->AsString = ComboBox3->Text;
	ADOQuery3->FieldByName("�����������_������_���_�������")->AsString = Edit3->Text;
	ADOQuery3->FieldByName("�����")->AsString = ComboBox4->Text;
	ADOQuery3->FieldByName("���������_������")->AsString = Edit4->Text;

	ADOQuery3->Post();
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
	ComboBox3->Visible = false;
	ComboBox4->Visible = false;
	Edit1->Visible = false;
	Edit2->Visible =false;
	Edit3->Visible = false;
	Edit4->Visible = false;
    Button5->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormCreate(TObject *Sender)
{
  /*
    	ADOConnection2->Provider = "Microsoft.Jet.OLEDB.4.0";
		ADOConnection2->ConnectionString = "TimeDate.mdb";
		ADOQuery2->Active = true;
  */
}
//---------------------------------------------------------------------------



void __fastcall TForm8::N5Click(TObject *Sender)
{
    ShowMessage("������ ������ ������ ���� �� ���������� ������ �������� ���� �������� ����������");
}
//---------------------------------------------------------------------------

