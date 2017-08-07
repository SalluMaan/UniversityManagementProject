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


class Student
{

	char Name_Of_Student[30];
	char Class[30];
	char Section[5];
	float Current_GPA;
	long int Contact_Number;

public:
	Student(char NmStd[30], int size, char C[30], int size1, char Sec[5], int size3, float GPA, long int CN)
	{


		strcpy(Name_Of_Student, NmStd);
		strcpy(Class, C);
		strcpy(Section, Sec);
		Current_GPA = GPA;
		double Contact_Number = CN;

	}
	void PutData()
	{
		cout << "Name Of Student   :";
		cin.getline(Name_Of_Student, 30);
		cout << "Class             :";
		cin.getline(Class, 30);
		cout << "Section           :";
		cin>>Section;
		cout << "Current GPA       :";
		cout << Current_GPA;
		cout << "Contact Number          :";
		cin >> Contact_Number;
	}
	void Display()
	{

		cout << "+++++++++++++++++++++++++" << endl;
		cout << "+++++++++Student+++++++++" << endl;
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "Name Of Student   :" << Name_Of_Student << endl;
		cout << "Class             :" << Class << endl;
		cout << "Section           :" << Section << endl;
		cout << "Current GPA       :" << Current_GPA << endl;
		cout << "Contact No        :" << Contact_Number << endl;
		cout << "  \n \n \n \n ";

	}
	//~Student();
};
