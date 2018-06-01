#include "people.h"

void PersonalData::setAge(int age)
{
	if(value < 0)
		this->age = 0;
	else
		this->age = age;
}
PersonalData::PersonalData()
{
	static int i = 0;
	cout << "This constructor has been just invoked" << ++i << endl;
	age = 10;

	p = new int[5];
}


PersonalData::PersonalData(short age)
{
	cout << "this is diff cons" << endl; 
	this->age = age;
}


PersonalData::~PersonalData()
{
	static int j = 0;
	cout <<"Destructor has been just invoked "<< ++j << endl;
	
	delete [] p;
}