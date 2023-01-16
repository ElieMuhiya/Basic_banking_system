// c++_project_bank_system.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include"stdlib.h"
#include"ctype.h"
#include"string"


#include"account.h"
#include"daily_account.h"
#include"saving.h"
#include"student.h"

void main_menu();
void main() {
	
	student stobj;
	daily_account objd;
	daily_account *obja = new daily_account;
	obja = &objd;

	student *stobjd=new student;
	stobjd =&stobj;
	saving objs;
	saving *objss = new saving;
	objss = &objs;

	int id;
	int ch = 0;
	long test;
	string dy;
	int choice = 0;
	int close;
	string new_f;
	string new_l;



	cout << endl;
	cout << "\t\t\t\t\t\t\t**********************************" << endl;
	cout << "\t\t\t\t\t\t\t*      WELCOME TO ELIE'S BANK    *" << endl;
	cout << "\t\t\t\t\t\t\t*               LTD              *" << endl;
	cout << "\t\t\t\t\t\t\t*                                *" << endl;
	cout << "\t\t\t\t\t\t\t*                                *" << endl;
	cout << "\t\t\t\t\t\t\t**********************************" << endl;
	cin.get();
	cout << endl;


	cout << endl;

	while (ch != 6) {

		main_menu();

		cin >> ch;

		switch (ch) {
		case 1:
			cout << " Which type of account do you want to open ?" << endl << "\n";
			cout << "!!---------------------------------------!!\n";
			cout << "daily\nsaving\nstudent" << endl;
			cout << "!!---------------------------------------!!\n";
			cin.ignore();
			getline(cin, dy);
			if (dy == "daily" || dy == "DAILY" || dy == "Daily") {

				objd.setacc_type(dy);
				objd.setmessage("for daily account [1-500]->");
				objd.create_new_account();

				cout << "\n\n your" << " " << objd.getacc_type() << " " << "account has been successfully created" << "\n\n";

			}

			else if (dy == "saving" || dy == "SAVING" || dy == "Saving") {

				objs.setacc_t(dy);
				objs.setmessage("for saving account [500-1000]->");
				objs.create_new_account();


				cout << "\n\n your" << " " << objs.getaccounttype() << " " << "account has been successfully created" << "\n\n";

			}

			else if (dy == "student" || dy == "Student" || dy == "SAVING") {
				stobj.setacc_type2(dy);
				stobj.setmessage(" for student account [1000-2000]->");
				stobj.create_new_student_account();


				cout << "\n\n your" << " " << stobj.getacc_type2() << " " << "account has been successfully created" << "\n\n";
			}

			break;

		case 2:

			cout << "Enter your Account number ->";
			cin >> test;
			if (test > 1 && test < 500) {
				objd.setaccnumb(test);
				objd.deposites();
			}
			else
				if (test > 500 && test < 1000) {

					objs.setaccnumber(test);
					objs.deposites_s();

				}

				else
					if (test > 1000 && test < 2000) {
						stobj.setaccnumb2(test);
						stobj.deposites2();
					}
					else
						cout << "\n you entered a wrong number\n";
			break;
		case 3:
			cout << "\nEnter your Account number ->";
			cin >> test;
			if (test > 1 && test < 500) {
				objd.setaccnumb(test);
				objd.withdraw();
			}
			else
				if (test > 500 && test < 1000) {

					objs.setaccnumber(test);
					objs.withdraws();

				}

				else
					if (test > 1000 && test < 2000) {
						stobj.setaccnumb2(test);
						stobj.withdraw();
					}
					else
						cout << "\nyou entered a wrong account number\n";
			break;



		case 4:
			cout << "\n\n";
			cout << "Enter your account number->" << " ";
			cin >> test;
			if (test > 1 && test <500) {
				objd.setaccnumb(test);
				objd.check_vs();
				objd.display_acc_details();
			}
			else if (test > 500 && test <1000)
			{
				objs.setaccnumber(test);
				objs.check_s();
				objs.display_acc_details();
			}

			else 
				if (test > 1000 && test < 2000)
				{
					stobj.setaccnumb2(test);
				stobj.check_vs2();
				stobj.display_stdc_details();
			}
				
			break;

		case 5:
			cout << "\n\nEnter your account number->" << " ";
			cin >> test;
			if (test > 1 && test < 500) {
				objd.setaccnumb(test);
				objd.modifyaccount();
				cin >> choice;
				switch (choice)
				{
				case 1:
					cout << "enter the new first name\n";
					cin.ignore();
					getline(cin, new_f);
					objd.setnme_f(new_f);
					cout << "\n first name successfully updated \n";
					break;

				case 2:
					cout << "enter the new last name\n";
					cin.ignore();
					getline(cin, new_l);
					objd.setname_l(new_l);
					cout << "\n last name successfully updated \n";
					break;

				default:

					cout << " you entered a wrong number..." << endl << "\n";
					break;
				}

			}
			else
				if (test > 500 && test<1000) {
					objs.setaccnumber(test);
					objs.modifyaccounts();
					cin >> choice;
					switch (choice)
					{
					case 1:
						cout << "enter the new first name\n";
						cin.ignore();
						getline(cin, new_f);
						objs.setnme_f(new_f);
						cout << "\n first name successfully updated \n";
						break;

					case 2:
						cout << "enter the new last name\n";
						cin.ignore();
						getline(cin, new_l);
						objs.setname_l(new_l);
						cout << "\n last name successfully updated \n";
						break;



					default:

						cout << " you entered a wrong number..." << endl << "\n";
						break;
					}

				}

				else
					if (test > 1000 && test < 2000)
					{
						stobj.setaccnumb2(test);
						stobj.modifyaccounts();
						cin >> choice;
						switch (choice)
						{
						case 1:
							cout << "\nenter the new first name\n";
							cin.ignore();
							getline(cin, new_f);
							stobj.setnme_f2(new_f);
							cout << "\n first name successfully updated \n";
							break;

						case 2:
							cout << "\nenter the new last name\n";
							cin.ignore();
							getline(cin, new_l);
							stobj.setname_l2(new_l);
							cout << "\n last name successfully updated \n";
							break;

						case 3:
							cout << "\n enter your new student id-->";
							cin >> id;
							stobj.setid(id);
							cout << "\nstudent id successfully updated\n";
							break;
						default:

							cout << " you entered a wrong number..." << endl << "\n";
							break;
						}
					}
					else

						cout << "\n yuo entered a wrong account number\n";

			
			break;

		
		
			main_menu();
		}


		cout << "\n\n\n";



	}


		system("Pause");
	

}
void main_menu(){

		cout << "\n\n";
		cout << "****** MAIN MENU**********" << endl << "\n\n";



		cout << "1. Create a new account " << endl << endl;

		cout << "2. Deposite into daily , saving  or student account" << endl << endl;

		cout << "3. Withdraw money from any of your accounts " << endl << endl;

		cout << "4. Display your  Account details " << endl << endl;

		cout << "5.Modify your account" << endl << endl;

		cout << "6.Exit" << endl << endl;

		cout << " Select an option [1-6]->";
	}