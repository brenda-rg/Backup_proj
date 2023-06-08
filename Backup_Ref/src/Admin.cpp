#ifndef ADMIN_CPP
#define ADMIN_CPP

#include <iostream>
#include <string>
//#include <istream>

using namespace std;

#include "../header/Admin.h"
#include "../header/TaskList.h"


Admin::Admin(){}
//Admin::~Admin() = default;

void Admin::displayMainMenu() {
	int choice;
	string taskName;

	while (true)
	{
		clearScreen();
		cout << "Kooala Task Scheduler\n"
			<< "Options:\n"
			<< "1. Add Task\n"
			<< "2. Display Tasks\n"
			<< "3. Settings\n"
            << "4. Exit Program\n"
			<< "Please select an option: ";

		try {
			cin >> choice;
			if (!(choice >= 1 && choice <= 4))
				throw out_of_range("Please input a valid choice");

			switch (choice) {
			case 1:
				cout << "Enter Task Name: \n";
				cin.clear();
				cin.ignore();
				getline(cin, taskName);
				tasks.addTask(taskName);
				break;

			case 2:
				displayTaskList();
				break;
            
            case 3:
                displaySettings();
                break;

			case 4:
				cout << "\n Goodbye! \n";
				exit(0);
				break;
			}
		}
		catch (const out_of_range &e) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		catch (const ios_base::failure&) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	
}

void Admin::displayTaskList()
{
	int choice;
	string taskName;

	while (1) {

		clearScreen();
			tasks.displayTaskList();
			cout << endl << endl;
			cout << "Options:\n"
			<< "1. Return to Main Menu\n"
			<< "2. Add Task\n"
			<< "3. Mark Task as Done\n"
			<< "4. Remove Task\n"
			<< "5. Edit Task Name\n"
			<< "6. Edit Task Description\n"
			<< "***NOTE 4-6 not yet implemented\n"
			<< "Please select an option: ";

		try {
			cin >> choice;
			if (!(choice >= 1 && choice <= 3))
				throw out_of_range("Please input a valid choice");

				switch(choice) {
					case 1:
						displayMainMenu();
						break;
					case 2:
					cout << "Enter Task Name: \n";
					cin.clear();
					cin.ignore();
					getline(cin, taskName);
					tasks.addTask(taskName);
				}
		}

		catch (const out_of_range & e) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		catch (const ios_base::failure&) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
}

void Admin::displayCalendar() {
	int choice;

	while (true)
	{
		clearScreen();
            cout
			<< "\nOptions:\n"
			<< "Please select an option: ";

		try {
			cin >> choice;
			if (!(choice >= 1 && choice <= 3))
				throw out_of_range("Please input a valid choice");
		}
		catch (const out_of_range & e) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		catch (const ios_base::failure&) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		displayMainMenu();
	}
}

void Admin::displaySettings() 
{
    cout << "settings\n";
	displayMainMenu();
}

void Admin::clearScreen()
{
	std::cout << std::string(20, '\n');
}

#endif