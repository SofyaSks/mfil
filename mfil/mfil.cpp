#include <iostream>
#include <string>
#include "data.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	
	// Задача 1
	DB shopping = { "Shopping list" };

	string answer;
	do {
		cout << "Какую команду хотите выпонить?\n";
		cout << "Show;\n";
		cout << "Add;\n";
		cout << "Clear;\n";
		cout << "Exit;\n";
		cout << "Введите команду: ";
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
						cout << "Завершение программы...";
					else
						cout << "Программа не обнаружена";
	} while (answer != "exit");

	return 0;
}