# 🤝 CONTRIBUTING Guide

Thank you for your interest in contributing to **CPP-PROJECTS**! 🚀

This repository contains Object-Oriented Programming (OOP) based C++ projects designed for learning, practice, and real-world application development.

Whether you're fixing bugs, improving documentation, adding new features, or creating entirely new projects, your contributions are welcome.

---

# 📋 How to Contribute

## 1️⃣ Reporting Issues

Found a bug or unexpected behavior?

Please create an issue and include:

* Project name
* Steps to reproduce
* Expected behavior
* Actual behavior
* Compiler version
* Operating System

Example:

```text
Project: Bank Account Management System

Issue:
Program crashes when withdrawing a negative amount.

Compiler:
g++ 13.2

OS:
Windows 11
```

---

## 2️⃣ Suggesting Improvements

Ideas are always welcome!

Examples:

* Better algorithms
* Improved OOP design
* Additional features
* Code optimization
* UI enhancements
* Better documentation

Open an issue first to discuss major changes.

---

## 3️⃣ Submitting Code Changes

### Step 1: Fork the Repository

```bash
git clone https://github.com/YOUR-USERNAME/CPP-PROJECTS.git

cd CPP-PROJECTS
```

---

### Step 2: Create a New Branch

```bash
git checkout -b feature/your-feature-name
```

Examples:

```bash
git checkout -b feature/add-student-management-system

git checkout -b fix/bank-withdrawal-validation
```

---

### Step 3: Make Your Changes

While coding:

✅ Follow OOP principles

✅ Use meaningful names

✅ Write clean and readable code

✅ Add comments where necessary

✅ Maintain existing coding style

---

### Step 4: Test Your Code

Compile using:

```bash
g++ -Wall -Wextra -std=c++11 filename.cpp -o output
```

Run:

```bash
./output
```

Ensure:

* No compilation warnings
* No runtime errors
* Edge cases handled properly

---

### Step 5: Commit & Push

```bash
git add .

git commit -m "Add: Brief description of changes"

git push origin feature/your-feature-name
```

Example:

```bash
git commit -m "Add: Search functionality in Inventory Management System"
```

---

### Step 6: Open a Pull Request

Provide:

* Clear description
* Screenshots (if applicable)
* Related issue number
* Testing details

---

# 💻 C++ Coding Guidelines

## Style Rules

### Use Meaningful Names

✔ Good

```cpp
double calculateSalary();
```

❌ Bad

```cpp
double calc();
```

---

### Use Proper Formatting

```cpp
class Employee
{
private:
    string name;
    double salary;

public:
    void display();
};
```

---

### Keep Functions Focused

Each function should perform one task.

✔ Good

```cpp
void displayEmployee();
double calculateSalary();
```

❌ Bad

```cpp
void everything();
```

---

# 🏗️ Project Structure Guidelines

Recommended structure:

```cpp
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// Class Definitions

class Example
{
private:
    int data;

public:
    Example();
    void display();
};

// Main Function

int main()
{
    return 0;
}

// Function Definitions
```

---

# 📚 OOP Best Practices

## Encapsulation

Keep data private whenever possible.

```cpp
class Account
{
private:
    double balance;

public:
    void deposit(double amount);
};
```

---

## Inheritance

Use inheritance only when a genuine "is-a" relationship exists.

```cpp
class Employee
{
};

class FullTimeEmployee : public Employee
{
};
```

---

## Polymorphism

Prefer virtual functions for runtime flexibility.

```cpp
virtual void calculateSalary() = 0;
```

---

## Exception Handling

Handle invalid operations safely.

```cpp
try
{
    if(amount < 0)
        throw invalid_argument("Invalid Amount");
}
catch(exception& e)
{
    cout << e.what();
}
```

---

# 🎯 Types of Contributions

## 🐛 Bug Fixes

* Fix logic errors
* Fix crashes
* Fix invalid input handling
* Improve exception handling

---

## ✨ New Features

Examples:

* New management systems
* Additional modules
* Better reporting systems
* Advanced file handling

---

## 📚 Documentation

Help improve:

* README.md
* SETUP.md
* CONTRIBUTING.md
* Project documentation
* Code comments

---

## 🧪 Testing

Contributions involving:

* Test cases
* Validation scenarios
* Edge case testing
* Stress testing

are highly appreciated.

---

# ✅ Pull Request Checklist

Before submitting:

* [ ] Code compiles successfully
* [ ] No compiler warnings
* [ ] OOP principles followed
* [ ] Comments added where needed
* [ ] README updated (if required)
* [ ] No merge conflicts
* [ ] Meaningful commit message
* [ ] Tested on sample inputs

---

# 🚫 What to Avoid

Please avoid:

* Unnecessary global variables
* Duplicate code
* Hardcoded values
* Poor variable naming
* Unused functions
* Large unstructured classes

---

# 📜 Commit Message Examples

Good:

```text
Add: Employee search functionality

Fix: Withdrawal validation bug

Improve: Inventory file handling

Refactor: Payroll calculation module
```

Bad:

```text
Update

Fix stuff

Changes
```

---

# 💡 Suggested Project Ideas

Contributors may add:

* Student Management System
* Library Management System
* Hotel Reservation System
* Railway Reservation System
* Online Examination System
* Vehicle Rental System
* Contact Management System

---

# 📞 Need Help?

Feel free to:

📧 Email: [iampriyanshuraj01@gmail.com](mailto:iampriyanshuraj01@gmail.com)

🐙 GitHub Issues Section

💼 LinkedIn: linkedin.com/in/rajpriyanshu1169

---

# 🙌 Thank You

Every contribution helps make this repository better for learners and developers worldwide.

Happy Coding! 🚀

**Made with ❤️ by Priyanshu Raj**
