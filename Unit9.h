//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.WindowsStore.hpp>
#include <Vcl.WinXPickers.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
	TDatePicker *DatePicker1;
	TDatePicker *DatePicker2;
	TLabel *Label2;
	TLabel *Label3;
	TADOQuery *ADOQuery1;
	TDataSource *l;
	TMemo *Memo1;
	TButton *Button1;
	TTimer *Timer1;
	TLabel *Label1;
	TADOConnection *ADOConnection1;
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm9(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
