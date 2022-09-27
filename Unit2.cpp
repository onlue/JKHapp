//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCloseQuery(TObject *Sender, bool &CanClose)
{
	Form1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Panel1Click(TObject *Sender)
{
	 Form3->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Panel2Click(TObject *Sender)
{
    Form4->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Panel4Click(TObject *Sender)
{
	Form5->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Panel3Click(TObject *Sender)
{
    Form6->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Panel5Click(TObject *Sender)
{
	Form7->ShowModal();
}
//---------------------------------------------------------------------------

