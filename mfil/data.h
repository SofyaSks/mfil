#pragma once
#include <iostream>
#include <string>

struct DB {
	std::string title;
	int notescount = 0;
	std::string notes;
};

void addnote(DB &base);
void clearnote(DB& base);
void showDB(DB& base);