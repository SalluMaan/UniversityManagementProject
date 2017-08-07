#pragma once

#include "stdafx.h"
#include <iostream>

#include <process.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class School
{
	char Name_School[30];
	char Name_Of_Director[30];
	int List_Of_Departments;
public:
	School(char NS[30], int size3, char NoD[30], int size4, int LoD)
	{
		strcpy(Name_School, NS);
		strcpy(Name_Of_Director, NoD);
		List_Of_Departments = LoD;
	}
	void PutData()
	{
		cout << "Enter the name of School :";
		cin.getline(Name_School, 30);
		cout << "Enter the name of director of " << Name_School << " :";
		cin.getline(Name_Of_Director, 30);
		cout << "List of Department affiliated to " << Name_School << " :";
		cin >> List_Of_Departments;

	}
	void Display()
	{
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "+++++++++School+++++++++" << endl;
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "Name of School   :" << Name_School << endl;
		cout << "Name Of Director :" << Name_Of_Director << endl;
		cout << "List Of Department:" << List_Of_Departments << endl;

		cout << "  \n \n \n \n ";
	}
	// ~School();
};