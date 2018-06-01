#include <iostream>
#include "people.h"
using namespace std;

void test()
{
	PersonalData *pointer = new PersonalData[5];
	
	delete []pointer;
}


int main()
{

	/*
	PersonalData person(20);
	PersonalData person2(&0);
	
	cout << person.getAge() << endl;
	cout << person2.getAge() << endl;
	*/
	test();
	return 0;
}