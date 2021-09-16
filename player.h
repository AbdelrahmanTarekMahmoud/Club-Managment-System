#pragma once
#include "person.h"
class player : public person
{
private:
	int number;
	static int count_players;
	int goals;

public:
	player();
	player(string n, int a, string e, string na, float sa, int num, int goal);
	static int player_no;
	void set_number();
	int get_number();
	void set_goals();
	int get_goal();
	float get_total_salary();
	void print();
	~player();
};
