//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCGrids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TComboBox *ComboBox1;
	TDBCtrlGrid *DBCtrlGrid1;
	TDBText *DBText1;
	TStaticText *StaticText1;
	TStaticText *StaticText2;
	TDBText *DBText2;
	TADOQuery *ADOQuery11;
	TDataSource *DataSource11;
	TButton *Button1;
	TDBCtrlGrid *DBCtrlGrid2;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TDBText *DBText3;
	TDBText *DBText4;
	TDBText *DBText5;
	TStaticText *StaticText3;
	TADOQuery *ADOQuery2;
	TDataSource *DataSource2;
	TDBCtrlGrid *DBCtrlGrid3;
	TDBText *DBText6;
	TDBCtrlGrid *DBCtrlGrid4;
	TADOQuery *ADOQuery3;
	TDataSource *DataSource3;
	TDBText *DBText7;
	TDBText *DBText8;
	TDBText *DBText9;
	TDBText *DBText10;
	TDBText *DBText11;
	TDBText *DBText12;
	TStaticText *StaticText4;
	TStaticText *StaticText5;
	TStaticText *StaticText6;
	TStaticText *StaticText7;
	TStaticText *StaticText8;
	TStaticText *StaticText9;
	TPopupMenu *PopupMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TPopupMenu *PopupMenu2;
	TMenuItem *MenuItem1;
	TMenuItem *MenuItem2;
	TPopupMenu *PopupMenu4;
	TMenuItem *MenuItem5;
	TMenuItem *MenuItem6;
	TEdit *Edit1;
	TButton *Button2;
	TEdit *Edit2;
	TEdit *Edit3;
	TComboBox *ComboBox2;
	TButton *Button3;
	TButton *Button4;
	TPopupMenu *PopupMenu3;
	TMenuItem *N3;
	TMenuItem *N4;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TEdit *Edit4;
	TButton *Button5;
	TMainMenu *MainMenu1;
	TMenuItem *N5;
	TADOConnection *ADOConnection1;
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall FormMouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall FormMouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall MenuItem5Click(TObject *Sender);
	void __fastcall N1Click(TObject *Sender);
	void __fastcall MenuItem3Click(TObject *Sender);
	void __fastcall MenuItem6Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall MenuItem2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall MenuItem1Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
