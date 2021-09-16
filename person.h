#pragma once
#include <iostream>
#include<string>
using namespace std;

class person {
protected:
	static int counter_persons;
	int age;
	string name;
	string email;
	string nationality;
	float salary;
public:
	person();
	person(string n, int a, string e, string na, float s);
	void set_name();
	string get_name();
	void set_age();
	int get_age();
	void set_email();
	string get_email();
	void set_nationality();
	string get_nationality();
	virtual float get_total_salary() = 0;
	void print();
	void set_salary();
	float get_salary();
	~person();

};

