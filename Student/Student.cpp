/* Реалізуйте клас «Студент». Необхідно зберігати в змінних-членах класу:
ПІБ, дату народження, контактний телефон, місто, країну, назву навчального закладу, місто та
країну (де знаходиться навчальний заклад), номер групи. Реалізуйте функції-члени класу для введення даних, виведення даних.*/
#include <locale>
#include <windows.h>
#include <iostream>

using namespace std;
class Student {
private:
	string NameStudent;
	string Birthday;
	int PhoneNomber;
	string City;
	string Country;
	string NameSchool;
	string CitySchool;
	string ContrySchool;
	string GroupNumber;

public:
 	void set(){
		cout << "Введіть ПІб студента:" << endl;
		cin >> NameStudent;
		cout << "Введіть дату народження студента:" << endl;
		cin >> Birthday;
		cout << "Введіть номер телефона:" << endl;
		cin >> PhoneNomber;
		cout << "Введіть країну проживання студента:" << endl;
		cin >> Country;
		cout << "Введіть місто проживання студента:" << endl;
		cin >> City;
		cout << "Введіть назву навчального закладу:" << endl;
		cin >> NameSchool;
		cout << "Введіть країну де знаходиться навчальний заклад:" << endl;
		cin >> ContrySchool;
		cout << "Введіть місто де знаходиться навчальний заклад:" << endl;
		cin >> CitySchool;
		cout << "Введіть номер групи:" << endl;
		cin >> GroupNumber; 
	}
	void show(){
		cout << "ПІб студента: " << NameStudent << endl;
		cout << "Дата народження студента: " << Birthday << endl;
		cout << "Номер телефона: " << PhoneNomber << endl;
		cout << "Kраїнa проживання студента: " << Country << endl;
		cout << "Mісто проживання студента: " << City << endl;
		cout << "Назва навчального закладу: " << NameSchool << endl;
		cout << "Країна де знаходиться навчальний заклад: " << ContrySchool << endl;
		cout << "Місто де знаходиться навчальний заклад: " << CitySchool << endl;
		cout << "Номер групи: " << GroupNumber << endl;
	}
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Доброго дня, вітаємо Вас у нашій базі даних студентів)" << endl;
	cout << "Введіть дані першого студента:" << endl;
	Student X1;
	X1.set();
	Student X2;
	cout << "Введіть дані другого студента:" << endl;
	X2.set();
	Student X3;
	cout << "Введіть дані третього студента:" << endl;
	X3.set();
	cout << "А тепер виведемо дані про наших студентів:" << endl;
	X1.show();
	X2.show();
	X3.show();
}


	