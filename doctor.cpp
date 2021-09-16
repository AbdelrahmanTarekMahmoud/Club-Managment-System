#include "doctor.h"
#pragma once
int doctor::count_doctors = 0;

doctor::doctor()
{
	count_doctors++;
}

doctor::doctor(string n, int a, string e, string na, float s, int so) :person(name, age, email, nationality, salary), succesfull_operations(so)
{
}

void doctor::set_operators()
{
	cin >> succesfull_operations;
}

int doctor::get_operators()
{
	return succesfull_operations;
}

float doctor::get_total_salary()
{
	return salary * (succesfull_operations);
}

void doctor::print()
{
	person::print();
	cout << "succesfull operations : " << succesfull_operations << endl;

}

doctor::~doctor()
{
	count_doctors--;
}