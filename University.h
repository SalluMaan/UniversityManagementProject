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

class University
{

	char	University_Name[30];
	char University_Address[30];
	char Name_Of_ViceChancler[30];
	int Rank;
	int List_Of_College;
public:
	University(char UN[], int size, char UA[], int size2, char NmVC[], int size3, int R, int LoC)
	{
		strcpy(University_Name, UN);
		strcpy(University_Address, UA);
		strcpy(Name_Of_ViceChancler, NmVC);
		Rank = R;
		List_Of_College = LoC;
	}
	void PutData()
	{

		cout << "Enter University Name   :";
		cin.getline(University_Name, 30);
		cout << "\n\n";
		cout << "Enter University Address    :";
		cin.getline(University_Address, 30);
		cout << "\n\n";
		cout << "Enter Vice Chancler Name   :";
		cin.getline(Name_Of_ViceChancler, 30);
		cout << "\n\n";
		cout << "Enter University's Rank (in Country) : ";
		cin >> Rank;
		cout << "\n\n";
		cout << "Enter List of College affiliated to " << University_Name << " :";
		cin >> List_Of_College;
	}

	void Display()
	{
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "+++++++University+++++++" << endl;
		cout << "+++++++++++++++++++++++++" << endl;
		cout << "University Name      :" << University_Name << endl;
		cout << "University Adress    :" << University_Address << endl;
		cout << "Name of Vice Chancler:" << Name_Of_ViceChancler << endl;
		cout << "  Rank               :" << Rank << endl;
		cout << "List Of College      :" << List_Of_College << endl;

		cout << "  \n \n \n \n ";

	}
	//~University();
};
