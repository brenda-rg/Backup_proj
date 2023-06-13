[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10973556&assignment_repo_type=AssignmentRepo)

# Kooala

 Authors: [Alexandar Nguyen](https://github.com/Xander-git), [Brenda Rojas](https://github.com/brenda-rg), [Abigail Orozco B](https://github.com/aoroz064), [Iheanyichukwu Kalu-Okere](https://github.com/Ikkoding)

## Project Description

 A task scheduler is an interesting project idea for our team to build because we utilize some form of schedule on a daily basis. We all have some form of improvement we would like to see from our task scheduler and we feel the most invested in this topic. We are looking for something that is better tailored for juggling our schedules, while also still being a robust software that anyone can use.

## Code/Tools used in development
 C++, Visual Studio Code, Git, Valgrind, Vim, Github, Cmake, Sqlite Tools, Miro

## Inputs & Outputs
 Inputs: Some of the inputs include: The user will be able to enter the specific event that they wants to modify/add, the due dates of the events, the action they want to make, type of event they want to add (category).

 Outputs: Some Outputs include: The program will have the option of printing whole schedule in the terminal, printing due dates and task, printing event times from the schedule in the terminal, or printing specified list/sublist in the program.

## Features
This program will provide custom form templates for event types, calculate remaining time until task due date, provide encouraging messages to motivate and engage users more directly, automate breakdown of task, provide the ability to switch  of different features to declutter UI, add custom tags for tasks in terms of importance, input test dates and important events and automatically update teh calendar. 
Depending on time constraints we may also implement GUI for easier inputting, custom backgrounds, text reminders in place of phone notifications.

## User Interface Specification

### Navigation Diagram
![User Navigation Diagram](https://user-images.githubusercontent.com/129914485/236547397-c2e2ad40-c8bc-43a8-b3f8-447914ab99c4.jpg)
The drawn illustration demonstrates how the user will navigate through the program as it’s executed. The user will run the program and come into a start menu. There, the user will have one of the 2 options, either going into the To-Do list or into Settings. At that point, the user will have the ability to perform specific actions depending on the option they decide to select. The user will be able to perform actions such as adding tasks, editing tasks, or turning off and on features in Settings. The user will then be able to exit back to the start menu or exit the program. 

### Screen Layouts
![Screen Layout-1](https://user-images.githubusercontent.com/129914320/236967535-13452a1f-275b-4388-8fa8-1183ea2331e0.png)
![Screen Layout-2](https://user-images.githubusercontent.com/129914320/236967560-816a9616-5071-4fa3-9757-4fd2194b4894.png)
![Screen Layout-3](https://user-images.githubusercontent.com/129914320/236967573-38e2d09f-8bba-4e68-b3dc-2db43fb92866.png)


## Class Diagram
The UML diagram includes the sequence in which our project will flow from beginning to end. Our first class will be the beginning of the program which will start with the menu_base class. In this function, we will begin the task scheduler and go into the Start_Menu class. Once we go into the Start_Menu class, we will prompt the user so that they can select the menu option they want to go in. We will then prompt the user to enter a username and password with the corresponding functions listed. The LoginMenu will be dependent on the Start_Menu function and will collect the database information from the user. The task scheduler will then go into the  UserProfiletable class that will have a vector to fill in the user table with the information inputted in the loginMenu class. The User class will then validate that the user will input a proper username and password and jump into the listCollection class where functions of different lists will be called. The user will have the ability to see the most recent list, the task list due today, and a full view of a task list. This class will jump into the Task class and TaskList where the user will be able to edit the name of the task, the date, the description, add a task or add a form with the provided functions in these classes. This class will then set flags to check what dates the task is due and then exit out of the program as prompted. The User class can also access the SettingsMenu class, which is able to change or output the current settings of the program. 
![UML](https://github.com/cs100/final-project-broja016-aoroz064-anguy344-ikalu001/assets/129914485/d2cf9de3-5934-4252-9fdb-790212cef40f)
![UML (2)](https://github.com/cs100/final-project-broja016-aoroz064-anguy344-ikalu001/assets/129914485/9fc8bfd2-5b81-475d-abcd-eb2df091de03)

The solid principles that were applied to the new UML diagram were the single responsibility principle and the interface segregation principle. We applied SRP to our classes and applied the interface segregation principle to our task scheduler in regard to our features. These soild principles helped organize our UML and made it easier to begin working on code. 
We modified our UML so that our classes only had a signle responsibility for our task scheduler so that changes could only be made in specific code. We applied this by creating new classes and rearranging functions in the classes. By using ISP, the user can decide whether or not they want to turn on the provided features, giving them the option to costumize their scheduler rather than forcing the features to remain on. 

This new version of our UML helped us brekadown our code to simplify each class and its responsibility contained. The updated UML gave us a better understanding of how our code was going to flow in terms of the user aspect. By doing so, we were able to plan the workflow we wanted to accomplish for our sprints. 
 
 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application 
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
