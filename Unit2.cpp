//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int j=0;
int i;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
Memo1->Lines->Clear();
Memo1->Lines->LoadFromFile("questions.txt");
Memo2->Lines->Clear();
Memo2->Lines->Strings[0]=Memo1->Lines->Strings[j];
 j++;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
Form2->Hide();
Form1->Show();
j=1;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
if(Memo1->Lines->Strings[j]!="")
{
Memo2->Lines->Clear();
Memo2->Lines->Strings[0]=Memo1->Lines->Strings[j];
j++;
}
else
{
ShowMessage("Возрастное ограничение 0+");
Form2->Hide();Form1->Show();
j=1;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
if(j<8)
{
ShowMessage("Возрастное ограничение 18+");
Form2->Hide();Form1->Show();
}
else
{
if(j<13)
{
ShowMessage("Возрастное ограничение 16+");
Form2->Hide();Form1->Show();
}
else
{
if(j<16)
{
ShowMessage("Возрастное ограничение 12+");
Form2->Hide();Form1->Show();
}
else
{
if(j<19)
{
ShowMessage("Возрастное ограничение 6+");
Form2->Hide();Form1->Show();
}
}
}
}
j=1;
}
//---------------------------------------------------------------------------


