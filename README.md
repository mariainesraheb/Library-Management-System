# Library-Management-System
Library Management System: A C++ desktop application with a graphical interface using Qt. It helps manage library resources like books, users, and borrowing/returning operations easily.
A console-based Library Management System developed in C++ as a project for the Object-Oriented Programming (OOP) course.

## 📚 Features
- Add, borrow, return, and reserve resources (Books, Journals, etc.)
- Register/Login users with roles (User/Admin)
- Notifications for due dates and reservations
- File-based data persistence
- Role separation (Admin can add/remove resources)

##  How to Compile
Make sure you have a C++ compiler (e.g., g++) installed.

To compile:
```bash
g++ -o library main.cpp Resource.cpp User.cpp LibrarySystem.cpp (the path of the files)
