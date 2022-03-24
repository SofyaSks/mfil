#include "data.h"
#include <iostream>
#include <string>

void addnote(DB &base) {
	std::string str;
	std:: cout << "¬ведите новую запись: \n";
	getline(std::cin, str);
	base.notes += str + "\n";
	base.notescount++;
}

void clearnote(DB& base) {
	base.notes = "";
	base.notescount = 0;
}

void showDB(DB& base) {
	std::cout << "Title: " << base.title << std::endl;
	std::cout << "Notes number: " << base.notescount << std::endl;
	std::cout << "Notes: \n" << base.notes;
}