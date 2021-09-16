#pragma once
#include "person.h"
class manager : public person
{
private:
	int wins;
public:
	manager();
	manager(string n, int a, string e, string na, float s, int win);
	void set_wins();
	int get_wins();
	float get_total_salary();
	void print();
	~manager();


};
