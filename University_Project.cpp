// University_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "University.h "
#include "College.h"
#include "Student.h"
#include  "Faculty.h"
#include "Department.h"
#include "School.h "

int main()
{
	University Uni({ "UET" }, 30, { "BhagwanPuraLahore" }, 30, { "Fazal Ahmad" }, 30, 57, 2);
	Uni.Display();
	College C({ "Superior College" }, 25, { "Ahmad" }, 25, 2);
	C.Display();
	//School 1
	School S({ "School of Science" }, 30, { "Ali Gill" }, 30, 2);
	S.Display();
	//Department 1

	Department D({ "Computer Sc" }, 30, "Ali Cheema", 30, 2, 2);
	D.Display();
	// Faculty 1
	Faculty F({ "Faculty of Arts" }, 30, { "Hammeed" }, 30, { "Chairperson" }, 30, { "Art" }, 30, 03003456172);
	F.Display();
	//Student 
	Student S1({ "Hassan khan" }, 30, { "7th" }, 30, { "A" }, 5, 2.771, 03037435474);
	S1.Display();
	Student S2({ "Andaz Khan" }, 30, { "8th" }, 30, { "A" }, 5, 2.771, 03037535677);
	S2.Display();
	//Faculty 2
	Faculty F2({ "Faculty of Education" }, 30, { "Muhammad ijaz" }, 30, { "Assintant Professor" }, 30, { "Education Analyst" }, 30, 03002456172);
	F2.Display();
	//Student 
	Student S3({ "Salman" }, 30, { "Ninth" }, 30, { "A" }, 5, 2.771, 03037435474);
	S3.Display();
	Student S4({ "Ahmad" }, 30, { "10th" }, 30, { "A" }, 5, 2.771, 03037535677);
	S4.Display();
    return 0;
}

