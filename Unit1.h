#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <List.H>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
	__published : // IDE-managed Components
				  TEdit *EditFIO;
	TEdit *EditDepartment;
	TEdit *EditPosition;
	TDateTimePicker *DatePicker;
	TButton *BtnAdd;
	TEdit *EditSearchFIO;
	TButton *BtnFind;
	TEdit *EditSearchDepartment;
	TButton *BtnDepartment;
	TEdit *EditExperience;
	TButton *BtnExperience;
	TEdit *EditDeleteFIO;
	TButton *BtnDelete;
	TButton *BtnShowAll;
	TButton *BtnSave;
	TButton *BtnLoad;
	TMemo *Memo1;

	void __fastcall BtnAddClick(TObject *Sender);
	void __fastcall BtnShowAllClick(TObject *Sender);
	void __fastcall BtnFindClick(TObject *Sender);
	void __fastcall BtnDepartmentClick(TObject *Sender);
	void __fastcall BtnExperienceClick(TObject *Sender);
	void __fastcall BtnDeleteClick(TObject *Sender);
	void __fastcall BtnSaveClick(TObject *Sender);
	void __fastcall BtnLoadClick(TObject *Sender);

private:
	List employees;

public:
	__fastcall TForm1(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
