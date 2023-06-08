#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>
#include <limits>

#include "../header/Task.h"
#include "../header/TaskList.h"

using namespace std;


class Admin {
	private:
		TaskList tasks;
	public:
		Admin();

		void displayMainMenu();
		void displayTaskList();
		void displayCalendar();
		void displaySettings();
		void clearScreen();
};

#endif //ADMIN_HPP