#include <iostream>
#include "manager.h"
#include "player.h"
#include "doctor.h"
//1
using namespace std;
int total=0;
int totald = 0;
int totalm = 0;
player c[22];
doctor v[2];
manager b[1];
void enterplayer()
{
	
	int choice;
	cout << " HOW MANY PLAYERS DO U WANT ?"; 
	cin >> choice;
	
	for (int i = total; i < choice+total; i++)
	{
		cout << "The data of player number : " << i + 1 << endl;
		cout << "Enter name : " << endl;
		c[i].set_name();
		cout << "Enter Age : " << endl;
		c[i].set_age();
		cout << "Enter Email : " << endl;
		c[i].set_email();
		cout << " Enter nationality : " << endl;
		c[i].set_nationality();
		cout << " Enter the number of player :" << endl;
		c[i].set_number();
		cout << "Enter number of the goals which the player scored :" << endl;
		c[i].set_goals();
		cout << "The constant salary of player : " << endl;
		c[i].set_salary();
		
	}
	total = total + choice;

}
void showplayer()
{
	for (int i = 0; i < total;i++)
	{
		cout << " The data of player " << i + 1 << endl;
		cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
		cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
		cout << "Name of player :" << c[i].get_name() << endl;
		cout << "Age of player :" << c[i].get_age() << endl;
		cout << "Email of player :" << c[i].get_email() << endl;
		cout << "Nationality of player:" << c[i].get_nationality() << endl;
		cout << "number of player : " << c[i].get_number() << endl;
		cout << "The number of goals : " << c[i].get_goal() << endl;
		cout << "The total salary of player is  : " << c[i].get_total_salary() << endl;
		cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
		cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
		cout << "                                                 " << endl;
	}

}
void enterdoctor()
{
	int number;
	cout << " HOW MANY Doctors DO U WANT ?";
	cin >> number;

	for (int i = totald; i < number + totald; i++)
	{
		cout << "The data of doctors number : " << i + 1 << endl;
		cout << "Enter name : " << endl;
		v[i].set_name();
		cout << "Enter Age : " << endl;
		v[i].set_age();
		cout << "Enter Email : " << endl;
		v[i].set_email();
		cout << " Enter nationality : " << endl;
		v[i].set_nationality();
		cout << " Enter the number of Sucessful operations :" << endl;
		v[i].set_operators();
		cout << "The constant salary of player : " << endl;
		v[i].set_salary();

	}
	totald = totald + number;



}
void showdoctor()
{
	for (int i = 0; i < totald;i++)
	{
		cout << " The data of doctor " << i + 1 << endl;
		cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
		cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
		cout << "Name of doctor :" << v[i].get_name() << endl;
		cout << "Age of doctor :" << v[i].get_age() << endl;
		cout << "Email of doctor  :" << v[i].get_email() << endl;
		cout << "Nationality of doctor :" << v[i].get_nationality() << endl;
		cout << "number of operations which doctor did : " << v[i].get_operators() << endl;
		cout << "The total salary of doctor is  : " << v[i].get_total_salary() << endl;
		cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
		cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
		cout << "                                                 " << endl;
	}
}
void entermanager()
{
	int choicem;
	cout << " HOW MANY managers DO U WANT ?";
	cin >> choicem;

	for (int i = totalm; i < choicem + totalm; i++)
	{
		cout << "The data of manger number : " << i + 1 << endl;
		cout << "Enter name : " << endl;
		b[i].set_name();
		cout << "Enter Age : " << endl;
		b[i].set_age();
		cout << "Enter Email : " << endl;
		b[i].set_email();
		cout << " Enter nationality : " << endl;
		b[i].set_nationality();
		cout << "Enter number of the wins which the manger achived :" << endl;
		b[i].set_wins();
		cout << "The constant salary of manager : " << endl;
		b[i].set_salary();

	}
	totalm = totalm + choicem;


}
void showmanager()
{
	for (int i = 0; i < totalm;i++)
	{
		cout << " The data of manager " << i + 1 << endl;
		cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
		cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
		cout << "Name of manager :" << b[i].get_name() << endl;
		cout << "Age of manager :" << b[i].get_age() << endl;
		cout << "Email of manager  :" << b[i].get_email() << endl;
		cout << "Nationality of manager :" << b[i].get_nationality() << endl;
		cout << "number of wins which manager achived : " << b[i].get_wins() << endl;
		cout << "The total salary of manager is  : " << b[i].get_total_salary() << endl;
		cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
		cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
		cout << "                                                 " << endl;
	}

}
void search()
{
	int numberofplayer;
	cout << " Enter the T_shirt number of player u want to search " << endl;
	cin >> numberofplayer;
	for (int i = 0;i < total;i++)
	{
		if (numberofplayer == c[i].get_number())
		{
			cout << " The data of player " << i + 1 << endl;
			cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
			cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
			cout << "Name of player :" << c[i].get_name() << endl;
			cout << "Age of player :" << c[i].get_age() << endl;
			cout << "Email of player :" << c[i].get_email() << endl;
			cout << "Nationality of player:" << c[i].get_nationality() << endl;
			cout << "number of player : " << c[i].get_number() << endl;
			cout << "The number of goals : " << c[i].get_goal() << endl;
			cout << "The total salary of player is  : " << c[i].get_total_salary() << endl;
			cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
			cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
			cout << "                                                 " << endl;
			
		}
	}

}
void update()
{
	int numberofplayer;
	cout << " Enter the T_shirt number of player u want to search " << endl;
	cin >> numberofplayer;
	for (int i = 0;i < total;i++)
	{
		if (numberofplayer == c[i].get_number())
		{
			cout << " Last data " << endl;
			cout << " The data of player " << i + 1 << endl;
			cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
			cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
			cout << "Name of player :" << c[i].get_name() << endl;
			cout << "Age of player :" << c[i].get_age() << endl;
			cout << "Email of player :" << c[i].get_email() << endl;
			cout << "Nationality of player:" << c[i].get_nationality() << endl;
			cout << "number of player : " << c[i].get_number() << endl;
			cout << "The number of goals : " << c[i].get_goal() << endl;
			cout << "The total salary of player is  : " << c[i].get_total_salary() << endl;
			cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
			cout << " :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
			cout << "                                                 " << endl;
			cout << " Enter The updated data " << endl;
			cout << "Enter name : " << endl;
			c[i].set_name();
			cout << "Enter Age : " << endl;
			c[i].set_age();
			cout << "Enter Email : " << endl;
			c[i].set_email();
			cout << " Enter nationality : " << endl;
			c[i].set_nationality();
			cout << " Enter the number of player :" << endl;
			c[i].set_number();
			cout << "Enter number of the goals which the player scored :" << endl;
			c[i].set_goals();
			cout << "The constant salary of player : " << endl;
			c[i].set_salary();
		}
	}



}
void deleterecord()
{
	cout << " Please press 1 if u want to delete players record " << endl;
	int a;
	cin >> a;
	if (a == 1)
	{
		total = 0;
		cout << " ALL THE RECORD OF PLAYERS IS DELETED " << endl;
	}
	else
	{
		cout << "invalid value " << endl;
	}

}

int main()
{
	cout << "///////////////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "///////////////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "///////////////////////////////// Welcome  ////////////////////////////////////////////" << endl;
	cout << "//////////////////////////////////////  TO   //////////////////////////////////////////" << endl;
	cout << "///////////////////////////////////////// Club Managment System ///////////////////////" << endl;
	cout << "///////////////////////////////////////////////////////////////////////////////////////" << endl;
	
	int value;
	while (1)
	{

		cout << "Press 1 to enter player data " << endl;
		cout << "Press 2 to show  player data " << endl;
		cout << "Press 3 to enter doctor data " << endl;
		cout << "Press 4 to show  doctor data " << endl;
		cout << "Press 5 to enter manager data " << endl;
		cout << "Press 6 to show  manager data " << endl;
		cout << "press 7 to search for player data" << endl;
		cout << "Press 8 to updata player data" << endl;
		cout << "Press 9 to delete players data" << endl;
		cout << "press 10 to exit" << endl;
		cin >> value;
		switch (value)
		{
		case 1:
			enterplayer();
			break;
		case 2:
			showplayer();
			break;
		case 3:
			enterdoctor();
			break;
		case 4:
			showdoctor();
			break;
		case 5:
			entermanager();
			break;
		case 6:
			showmanager();
			break;
		case 7:
			search();
			break;
		case 8:
			update();
			break;
		case 9:
			deleterecord();
			break;
		case 10:
			exit(0);
			break;
		default:
			cout << " Invalid input " << endl;
			break;

		}
	}

}