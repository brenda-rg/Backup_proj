#ifndef ADMIN_CPP
#define ADMIN_CPP

#include <iostream>
#include <string>
//#include <istream>

using namespace std;

#include "../header/Admin.h"
#include "../header/TaskList.h"
#include "../header/UserSort.h"

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
			<< "1. Display Tasks\n"
			<< "2. Add Task\n"
			<< "3. Edit Task \n"
            << "4. Exit Program\n"
			<< "Please select an option: ";

		try {
			cin >> choice;
			if (!(choice >= 1 && choice <= 4))
				throw out_of_range("Please input a valid choice");

			switch (choice) {
			case 1:
				displayTaskList();
				break;

			case 2:
				cout << "Enter Task Name: \n";
				cin.clear();
				cin.ignore();
				getline(cin, taskName);
				schedule.addTask(taskName);
				break;
            
            case 3:
				displayEditTask();
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
	UserSort s;
	while (1) {

		clearScreen();
			schedule.displayTaskList();
			cout << endl << endl;
			cout << "Options:\n"
			<< "1. Return to Main Menu\n"
			<< "2. Add Task\n"
			<< "3. Edit Task\n"
			<< "4. Sort Alphabetically\n"
			<< "5. Sort Chronologically \n"
			<< "6. Sort by Priority\n"
			<< "Please select an option: ";

		try {
			cin >> choice;
			if (!(choice >= 1 && choice <= 6))
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
						schedule.addTask(taskName);
					break;
					case 3:
						displayEditTask();
						break;
					case 4:
						s.getTaskByAlpha(schedule.getTasks());
						break;
					case 5:
						s.getTaskByChrono(schedule.getTasks());
						break;
					case 6:
						s.getTaskByPriority(schedule.getTasks());
						break;
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

void Admin::displayEditTask() {
	int choice;
	int change;

	while (true)
	{	
		clearScreen();
		schedule.displayTaskList();
		cout << endl << endl;
		cout << "Enter Task Id or type -1 to return to main menu: \n";
		cin.clear();
		cin.ignore();
		try {
			cin >> choice;
			if (!(choice >= -1 && choice <= schedule.getTaskSize()-1))
				throw out_of_range("Please input a valid choice");
				switch(choice) {
					case -1:
					displayMainMenu();
					break;
				}
				while(change != 9) {
					clearScreen();
					schedule.displayTaskList();
					cout << endl << endl;
					cout << "What would you like to change?"
					<< endl
					<< "1. name" << endl
					<< "2. mark complete" << endl
					<< "3. mark incomplete" << endl
					<< "4. add description" << endl
					<< "5. add/change date" << endl
					<< "6. add tag" << endl
					<< "7. delete tag" << endl
					<< "8. add/edit priority" << endl
					<< "9. return" << endl;
					try {
						cin.clear();
						cin.ignore();
						cin >> change;
						if (!(choice >= 1 && choice <= 9))
							throw out_of_range("Please input a valid choice");
							schedule.editTask(choice, change);
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
		catch (const out_of_range & e) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		catch (const ios_base::failure&) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		displayEditTask();
	}
}


void Admin::clearScreen()
{
	std::cout << std::string(20, '\n');
}

#endif