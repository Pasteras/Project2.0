#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;
class File_s
{
private:
	string lin_k = "D:\\Project C++\\Project 2.0\\words.txt"; //Link to file
	string accos = "File Manager\n\nSelect: \n1-Write file.\n2-Read file.\n3-Delete file.\n4-Rename file.\n\nChoise: ";
public:
	//Initializations
	File_s();
	File_s(string lin_k);
	//Setters
	void setLink(string lin_k);
	//Getters
	string getLink();
	string getAccos();
	//Works file
	void check_open_f_read();
	void check_open_f_write();
	void delete_file();
	int rename_file();
};

