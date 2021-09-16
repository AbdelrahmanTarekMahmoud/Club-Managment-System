#pragma once
#include "person.h"

int person::counter_persons = 0;

person::person()
{
	counter_persons++;
}

person::person(string n, int a, string e, string na, float s) :name(n), age(a), email(e), nationality(na), salary(s)
{
	counter_persons++;
}

void person::set_name()
{
	cin >> name;
}

string person::get_name()
{
	return name;
}

void person::set_age()
{
	cin >> age;
}

int person::get_age()
{
	return age;
}

void person::set_email()
{
	cin >> email;
}

string person::get_email()
{
	return email;
}

void person::set_nationality()
{
	cin >> nationality;
}

string person::get_nationality()
{
	return nationality;
}

void person::print()
{
	cout << "Name :" << name << endl;
	cout << "age : " << age << endl;
	cout << "email :" << email << endl;
	cout << "nationality : " << nationality << endl;

}


void person::set_salary()
{
	cin >> salary;
}

float person::get_salary()
{
	return salary;
}

person::~person()
{
	counter_persons--;
}