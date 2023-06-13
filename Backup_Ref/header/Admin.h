#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>
#include <limits>

#include "../header/Task.h"
#include "../header/TaskList.h"

using namespace std;


class Admin {
	protected:
		TaskList schedule;
	public:
		Admin();

		void displayMainMenu();
		void displayTaskList();
		void displayEditTask();
		void clearScreen();
};

#endif //ADMIN_HPP