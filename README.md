Nahid Gym System (C Language)

A comprehensive, console-based application designed to manage the core operations of a fitness center, including member registration, workout plan management, and membership tracking. This project was developed entirely in the C programming language as a capstone to demonstrate proficiency in data management, file handling, and structured programming.

Table of Contents

Project Overview

Key Features

Technologies & Core Concepts

System Requirements

How to Compile and Run

How to Use the System

File Structure

Potential Future Enhancements

Author

Project Overview

This Gym Management System provides a command-line interface (CLI) to simulate the administrative tasks of a real-world gym. It offers a menu-driven workflow for gym staff to handle member information, create and assign workout plans, and track membership statuses. All data is persistently stored in local binary files, ensuring that records are maintained across sessions. The project serves as a practical demonstration of C's capabilities for building robust, data-centric console applications for small-scale management needs.

Key Features

Member Management:

Add New Member: Register new members with details such as name, contact information, and membership start date.

View Member Details: Display a complete list of all members or search for a specific member by name or ID.

Update Member Information: Modify a member's personal or contact details.

Delete Member Record: Remove a member from the system.

Workout Plan Management:

Create Workout Plans: Design and save different workout routines (e.g., "Beginner Full-Body," "Advanced Weightlifting").

Assign Plans to Members: Link specific workout plans to individual members.

Membership & Billing:

Track Membership Status: View the start and end dates of a member's subscription.

Log Payments: (Optional Feature) Record membership fee payments.

Persistent Storage: All records (members, plans) are saved to local files, ensuring data is not lost when the application is closed.

Technologies & Core Concepts

Programming Language: C (Standard C99)

Compiler: GCC (GNU Compiler Collection) or any other standard C compiler.

Core C Concepts Implemented:

File I/O: Using fopen, fread, fwrite, fseek, and fclose for persistent data storage in binary files.

Data Structures: Extensive use of struct to model members, workout plans, and memberships.

Pointers & Memory Management: Efficient data handling, argument passing, and manipulation using pointers.

Modular Programming: Separation of concerns into functions for each distinct task (e.g., add_member(), create_plan()).

Standard Libraries: stdio.h, stdlib.h, string.h, time.h.

System Requirements

To compile and run this project, a C compiler must be installed on your system.

Linux: GCC is often pre-installed. If not, install it using your package manager (e.g., sudo apt-get install gcc).

macOS: Install the Xcode Command Line Tools by running xcode-select --install in the terminal.

Windows: Install a C compiler environment like MinGW or use an IDE with a built-in compiler like Visual Studio or Code::Blocks.

How to Compile and Run

Get the Source Code:
Download or clone the project files to your local machine.

Navigate to the Project Directory:
Open a terminal or command prompt and use the cd command to go to the project folder.

cd /path/to/Gym-Management-System


Compile the Code:
Use the gcc compiler to create an executable file from the source code.

gcc main.c -o gym


(Replace main.c if your primary source file is named differently.)

Run the Application:
Execute the compiled program to start the system.

On Linux/macOS:

./gym


On Windows:

gym.exe


How to Use the System

Upon launching the application, you will be presented with a clear, numbered main menu.

************************************
* GYM MANAGEMENT SYSTEM       *
************************************
| 1. Member Management             |
| 2. Workout Plan Management       |
| 3. View All Members              |
| 0. Exit Application              |
------------------------------------
Enter your choice:


Enter the number corresponding to the desired menu option and press Enter.

The system will guide you through sub-menus and prompts for any required information.

File Structure

The project is organized with a clean and understandable structure:

.
├── main.c              # The main C source code for the application.
├── members.dat         # Binary file for storing member records (created on first run).
├── plans.dat           # Binary file for storing workout plans (created on first run).
└── README.md           # This documentation file.


Potential Future Enhancements

This project provides a solid foundation that can be extended with more advanced features, such as:

Attendance Tracking: Add a feature to log member check-ins and check-outs.

Reporting: Generate simple reports, like a list of members whose subscriptions are expiring soon.

Improved Search: Implement more robust search functionality (e.g., search by phone number).

Code Modularity: Refactor the code into separate header (.h) and source (.c) files for different modules (e.g., member.c, plan.c).

Graphical User Interface (GUI): Develop a user-friendly graphical interface using a library like GTK or Qt.

Author

Your Name: [Mostafic Yellahy Nahid]

GitHub: [@mostaficnahid](https://github.com/mostaficnahid)

LinkedIn: [Mostafic Yellahy Nahid]((https://www.linkedin.com/in/mostafic-yellahy-nahid-46a0202b5/))
