#pragma once
#include "player.h"

int player::count_players = 0;

player::player()
{
	count_players++;
}

player::player(string n, int a, string e, string na, float sa, int num, int goal) :person(n, a, e, na, sa), number(num), goals(goal)
{
	count_players++;
}

void player::set_number()
{
	cin >> number;
}

int player::get_number()
{
	return number;
}

void player::set_goals()
{

	cin >> goals;

}

int player::get_goal()
{
	return goals;
}

float player::get_total_salary()
{
	return salary * goals;
}

void player::print()
{
	person::print();
	cout << "number : " << number << endl;
	cout << "goals : " << goals << endl;
}

player::~player()
{
	count_players--;
}