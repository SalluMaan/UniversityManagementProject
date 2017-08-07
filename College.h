#pragma once

#include <process.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class College
{
	char College_Name[25];
	char College_Dean[25];
	int List_Of_School;
public:
	College(char CN[25], int Size2, char CD[25], int size3, int LoS)
	{
		strcpy(College_Name, CN);
		strcpy(College_Dean, CD);
		List_Of_School = LoS;
	}
	void Display()
	{
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "+++++++++College+++++++++" << endl;
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "College Name   :" << College_Name << endl;
		cout << "College Dean   :" << College_Dean << endl;
		cout << "List Of School :" << List_Of_School << endl;

		cout << "\n \n \n \n";
	}
	//~College();
};