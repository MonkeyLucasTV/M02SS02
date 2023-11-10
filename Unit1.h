//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DMXTCP.h"
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TScrollBar *ScrollBar1;
	TScrollBar *ScrollBar2;
	TScrollBar *ScrollBar3;
	TScrollBar *ScrollBar4;
	TScrollBar *ScrollBar5;
	TScrollBar *ScrollBar6;
	TScrollBar *ScrollBar7;
	TScrollBar *ScrollBar8;
	TScrollBar *ScrollBar9;
	TScrollBar *ScrollBar10;
	TButton *Button4;
	TLabel *Label1;
	TEdit *Edit1;
	TCheckBox *CheckBox1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TTimer *Timer1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall ScrollBar2Change(TObject *Sender);
	void __fastcall ScrollBar1Change(TObject *Sender);
	void __fastcall ScrollBar3Change(TObject *Sender);
	void __fastcall ScrollBar4Change(TObject *Sender);
	void __fastcall ScrollBar5Change(TObject *Sender);
	void __fastcall ScrollBar6Change(TObject *Sender);
	void __fastcall ScrollBar7Change(TObject *Sender);
	void __fastcall ScrollBar8Change(TObject *Sender);
	void __fastcall ScrollBar9Change(TObject *Sender);
	void __fastcall ScrollBar10Change(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// Déclarations utilisateur
	DMXTCP monDMXTCP;
	void Auto();
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
