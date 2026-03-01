#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner) {
    	Memo1->Clear();
		Memo1->Lines->Add("Здесь будет информация о сотрудниках!");
	}

// добавить сотрудника
void __fastcall TForm1::BtnAddClick(TObject *Sender)
{
    try {
        Employee e(
            EditFIO->Text,
            StrToInt(EditDepartment->Text),
            EditPosition->Text,
            DatePicker->Date
        );

        employees.add(e);
		Memo1->Lines->Add("Новый сотрудник добавлен!");
		ShowMessage("Сотрудник добавлен успешно!");
    }
    catch(...) {
		ShowMessage("Ошибка ввода!");
    }
}

// покзаать всех
void __fastcall TForm1::BtnShowAllClick(TObject *Sender)
{
    Memo1->Text = employees.showAll();
}

// найти
void __fastcall TForm1::BtnFindClick(TObject *Sender)
{
    Employee* e = employees.find(EditSearchFIO->Text);

    if(e)
        Memo1->Text = e->fio + " | " + e->position;
    else
		Memo1->Text = "Не найден";
		ShowMessage("Не найден!");
}

// отдел
void __fastcall TForm1::BtnDepartmentClick(TObject *Sender)
{
    Memo1->Text =
        employees.byDepartment(
            StrToInt(EditSearchDepartment->Text));
}

// стаж
void __fastcall TForm1::BtnExperienceClick(TObject *Sender)
{
    Memo1->Text =
        employees.byExperience(
            StrToInt(EditExperience->Text));
}

// удалить
void __fastcall TForm1::BtnDeleteClick(TObject *Sender)
{
	if(employees.remove(EditDeleteFIO->Text)) {
		Memo1->Lines->Add("Удалено");
		ShowMessage("Удалено!");
		}
	else {
		Memo1->Lines->Add("Не найден");
		ShowMessage("Не найден!");
    }
}

// сохранение
void __fastcall TForm1::BtnSaveClick(TObject *Sender)
{
    employees.saveToFile("employees.txt");
    ShowMessage("Сохранено!");
}

// загрузка
void __fastcall TForm1::BtnLoadClick(TObject *Sender)
{
    employees.loadFromFile("employees.txt");
    Memo1->Text = employees.showAll();
}
