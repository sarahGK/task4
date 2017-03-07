// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "data.h"

// read data for backbone and side chain dihedral angles
// calcuate all 8 conditional probabilites  
void main()
{
	data mydata;
	ifstream f1("E:\\talk\\biology\\task4\\chi1.txt",ios::in);
	ifstream f2("E:\\talk\\biology\\task4\\alphabet.txt",ios::in);
	mydata.readfile(f1,f2);
	mydata.print_data(cout);
}
