//---------------------------------------------------------------------------

#ifndef Unit10H
#define Unit10H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCGrids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm10 : public TForm
{
__published:	// IDE-managed Components
	TDBCtrlGrid *DBCtrlGrid1;
	TDBText *DBText1;
	TDBText *DBText2;
	TDBText *DBText3;
	TDBText *DBText4;
	TStaticText *StaticText1;
	TDBText *DBText6;
	TDBText *DBText5;
	TStaticText *StaticText2;
	TStaticText *StaticText3;
	TDBMemo *DBMemo1;
	TComboBox *ComboBox1;
	TPopupMenu *PopupMenu1;
	TMenuItem *N1;
	TMainMenu *MainMenu1;
	TMenuItem *N2;
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall FormMouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall FormMouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall N1Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm10(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm10 *Form10;
//---------------------------------------------------------------------------
#endif
