#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//our menu here
	//so user can choose what they want
	char choice;
	int month, payment, adult = 50, kid = 20;

	cout << setw(59) << "A for Adult Gym " << endl;
	cout << setw(56) << "K for Kid Gym" << endl;
	cout << setw(60) << "S for Senior Gym " << endl;

	//request input from user
	cout << setw(65) << "plz enter your choice " << endl;
	cin >> choice;
	do
	{
		switch (choice)
		{
			//A for adult 
		case ('A'):
			cout << "How many month you want ?? " << endl;
			cin >> month;
			payment = month * adult;
			cout << "Your choice is adult Gym." << " The price is RM "<<payment << endl;
			break;
			//K for kid
		case ('K'):
			cout << "How many month you want ?? " << endl;
			cin >> month;
			payment = month * kid;
			cout << "Your choice is kid Gym ." << " The price is RM " <<payment<< endl;
			break;
			//S for senior
		case ('S'):
			cout << "Your choice is senior Gym. " << "The price is Free (FOC )" << endl;
			break;
			//Q for quit the menu
		case ('Q'):
			cout << "Exit the menu " << endl;
			break;
			// if user stil enter wrong input

		}

		//request input once again as long as user enter the corrrect input
		cout << "Another choice : " << endl;
		cin >> choice;

	}//repeat as long as user enter choice between  A S and K
	while (choice == 'A' || choice == 'K' || choice == 'S');

	//close greeting : Thank you
	cout << "Thanks you" << endl;



	return 0;


