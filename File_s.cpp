#include "File_s.h"

File_s prew;

File_s::File_s()
{
}

File_s::File_s(string lin_k)
{
	this->lin_k = lin_k;
}

void File_s::setLink(string lin_k)
{
	this->lin_k = lin_k;
}

string File_s::getLink()
{
	return lin_k;
}

string File_s::getAccos()
{
	return accos;
}

void File_s::check_open_f_read()
{
	ifstream file_r;
	file_r.open(prew.getLink());
	if (!file_r)
	{
		cout << "File is not open.\n\n";
	}
	else { cout << "File is open.\n\n"; };
	string out_text;
	while (getline(file_r, out_text))
	{
		cout << out_text << endl;
	}
	file_r.close();
}

void File_s::check_open_f_write()
{
	ofstream file_w;
	file_w.open(prew.getLink(), ios_base::app);
	string in_put;
	cout << "Enter text: ";
	cin >> in_put;
	file_w << in_put << endl;
	file_w.close();
}

int File_s::rename_file()
{
	int result;
	char oldname[] = "words.txt";
	char newname[] = "newname.txt";
	result = rename(oldname, newname);
	if (result == 0)
	{
		puts("File successfully renamed");
	}
	else
	{
		perror("Error renaming file");
	}
	return 0;
}

void File_s::delete_file()
{
	remove(lin_k.c_str());
}