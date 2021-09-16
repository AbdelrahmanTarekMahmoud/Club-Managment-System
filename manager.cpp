#pragma once
#include "manager.h"

manager::manager()
{
}

manager::manager(string n, int a, string e, string na, float s, int win) :person(n, a, e, na, s), wins(win)
{
}

void manager::set_wins()
{
	cin >> wins;
}

int manager::get_wins()
{
	return wins;
}

float manager::get_total_salary()
{
	return salary * wins;
}

void manager::print()
{
	person::print();
	cout << "wins :" << wins << endl;
}

manager::~manager()
{
}