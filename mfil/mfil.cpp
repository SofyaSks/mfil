#include <iostream>
#include <string>
#include "data.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	
	// ������ 1
	DB shopping = { "Shopping list" };

	string answer;
	do {
		cout << "����� ������� ������ ��������?\n";
		cout << "Show;\n";
		cout << "Add;\n";
		cout << "Clear;\n";
		cout << "Exit;\n";
		cout << "������� �������: ";
		getline(cin, answer);
		if (answer == "Show")
			showDB(shopping);
		else
			if (answer == "Add")
				addnote(shopping);
			else
				if (answer == "Clear")
					clearnote(shopping);
				else
					if (answer == "Exit")
						cout << "���������� ���������...";
					else
						cout << "��������� �� ����������";
	} while (answer != "exit");

	return 0;
}