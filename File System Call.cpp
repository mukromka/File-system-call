#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string dataTxt[30];
string temp;
int maxData = 0;

void openFile()
{
	ifstream txt("daftar-nama.txt");
	ofstream fileExport;
	fileExport.open("4210191028_Mukrom Karunia Azza.csv");
	if (txt.is_open())
	{
		int i = 0;
		while (!txt.eof())
		{
			getline(txt, temp);
			dataTxt[i] = temp;
			i++;
			maxData++;
		}
		txt.close();
		for (int i = 0; i < 30; i++)
		{
			fileExport << dataTxt[i] << endl;
		}
		fileExport.close();
		cout << "File sudah dibuat!" << endl;
	}
	else
		cout << "File error!";
}

void reWriteData()
{
	ofstream fileExport;
	fileExport.open("4210191028_Mukrom Karunia Azza.csv");
	if (fileExport.is_open())
	{
		for (int i = 30; i > 1; i--)
		{
			fileExport << dataTxt[i] << endl;
		}
		fileExport.close();
		cout << "File udah di balik!";
	}
	else
		cout << "File belum di balik!";
}

int main()
{
	openFile();
	reWriteData();
}