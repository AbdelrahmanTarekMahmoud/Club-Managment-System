#pragma once
#include "person.h"
class doctor : public person
{
private:
	int succesfull_operations;
	static int count_doctors;
public:
	doctor();
	doctor(string n, int a, string e, string na, float s, int so);
	static int doctors_no;
	void set_operators();
	int get_operators();
	float get_total_salary();
	void print();
	~doctor();
};