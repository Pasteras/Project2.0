#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "File_s.h"
using namespace std;

int main()
{
	File_s prew;//Object class.

	cout << prew.getAccos();//Prewier.
	bool var = true;//Cheking to while.
	int check;
	do 
	{
		cin >> check;//Choise.
		switch (check)
		{
		case 1:
			prew.check_open_f_write(); //Write text.
		case 2:
			prew.check_open_f_read(); //Read file.
			break;
		case 3:
			prew.delete_file(); //Delete file;
			break;
		case 4:
			prew.rename_file(); //Rename file.
			break;
		default: //If the wrong number is entered, it starts again.
			cout << "Press the correct option!\n";
		}
		if (check >= 1 && check <= 4)
		var = false;
	} while (var);
	return 0;
}