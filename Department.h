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


class Department
{
	char Name_Of_Department[30];
	char Name_Of_Head[30];
	int List_Of_Faculty_Members;
	int List_Of_Students;
public:
	Department(char ND[30], int size1, char NoH[30], int size2, int LoFM, int LoS)
	{
		strcpy(Name_Of_Department, ND);
		strcpy(Name_Of_Head, NoH);
		List_Of_Faculty_Members = LoFM;
		List_Of_Students = LoS;

	}
	void PutData()
	{
		cout << "Enter the Name of Department ";
		cin.getline(Name_Of_Department, 30);
		cout << "Enter the name of Head of Department";
		cin.getline(Name_Of_Head, 30);
		cout << "List of faculty members of   " << Name_Of_Department << " :";
		cin >> List_Of_Faculty_Members;
		cout << "List of Student ";
		cin >> List_Of_Students;

	}
	void Display()
	{
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "+++++++Department+++++++" << endl;
		cout << "+++++++++++++++++++++++++" << endl;

		cout << "Name Of Department   :" << Name_Of_Department << endl;
		cout << "Name Of Head         :" << Name_Of_Head << endl;
		cout << "List Of Faculty Members:" << List_Of_Faculty_Members << endl;
		cout << "List Of Student      :" << List_Of_Students << endl;

		cout << "  \n \n \n \n ";
	};
	//	~Department();

};
