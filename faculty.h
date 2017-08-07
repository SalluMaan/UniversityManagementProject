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


class Faculty
{
	char Name_Of_Faculty[30];
	char Designation[30];
	char Highest_Qualification[30];
	char Field_Of_Speciallization[30];
	long int Contact_Number;

public:

	Faculty(char NoF[30], int size, char Desig[30], int size1, char HQ[30], int size2, char FoS[30], int size3, long int CN)
	{
		strcpy(Name_Of_Faculty, NoF);
		strcpy(Designation, Desig);
		strcpy(Highest_Qualification, HQ);
		strcpy(Field_Of_Speciallization, FoS);
		Contact_Number = CN;

	}

	void PutData()
	{

		cout << "Enter the Name Of Faculty         :";
		cin.getline(Name_Of_Faculty, 30);
		cout << "Designation             :";
		cin.getline(Designation, 30);
		cout << "Highest Qualification   :";
		cin.getline(Highest_Qualification, 30);
		cout << "Field Of Speciallization:";
		cin.getline(Field_Of_Speciallization, 30);
		cout << "Contact Number          :";
		cin >> Contact_Number;


	}
	void Display()
	{
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "+++++++++Faculty+++++++++" << endl;
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "Name Of Faculty         :" << Name_Of_Faculty << endl;
		cout << "Designation             :" << Designation << endl;
		cout << "Highest Qualification   :" << Highest_Qualification << endl;
		cout << "Field Of Speciallization:" << Field_Of_Speciallization << endl;
		cout << "Contact Number          :" << Contact_Number << endl;
		cout << "  \n \n \n \n ";

	}
	//~Faculty();

};
