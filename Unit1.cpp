//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string>

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;



void TForm1::Auto(){
	if (CheckBox1->Checked == true) {
		monDMXTCP.Envoyer((AnsiString(Edit1 -> Text)).c_str(),4123);
		Sleep(50);
	}

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	monDMXTCP.FullOn();
	monDMXTCP.Envoyer((AnsiString(Edit1 -> Text)).c_str(),4123);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	   monDMXTCP.FullOff();
	   monDMXTCP.Envoyer((AnsiString(Edit1 -> Text)).c_str(),4123);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{


	monDMXTCP.Demonstration();
	monDMXTCP.Envoyer((AnsiString(Edit1 -> Text)).c_str(),4123);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	monDMXTCP.Envoyer((AnsiString(Edit1 -> Text)).c_str(),4123);
	Auto();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar2Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(2,255-ScrollBar2->Position);
	Auto();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
		monDMXTCP.ModifierCanal(1,255-ScrollBar1->Position);

	Auto();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar3Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(3,255-ScrollBar3->Position);
	Auto();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar4Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(4,255-ScrollBar4->Position);
	Auto();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar5Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,255-ScrollBar5->Position);
	Auto();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar6Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(6,255-ScrollBar6->Position);
	Auto();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar7Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(7,255-ScrollBar7->Position);
	Auto();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar8Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(8,255-ScrollBar8->Position);
	Auto();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar9Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(9,255-ScrollBar9->Position);
	Auto();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar10Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(10,255-ScrollBar10->Position);
	Auto();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	monDMXTCP.Demonstration();
	monDMXTCP.Envoyer((AnsiString(Edit1 -> Text)).c_str(),4123);
}
//---------------------------------------------------------------------------

