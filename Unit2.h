//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel4;
	TPanel *Panel3;
	TPanel *Panel5;
	TStaticText *StaticText1;
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall Panel1Click(TObject *Sender);
	void __fastcall Panel2Click(TObject *Sender);
	void __fastcall Panel4Click(TObject *Sender);
	void __fastcall Panel3Click(TObject *Sender);
	void __fastcall Panel5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
