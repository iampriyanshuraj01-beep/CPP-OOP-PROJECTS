# 🛠️ Setup Guide for CPP-PROJECTS

This guide will help you set up the environment required to compile and run all C++ projects in this repository.

---

# 📋 Prerequisites

## Windows

### Option 1: MinGW-w64 (Recommended)

1. Download MinGW-w64
2. Install GCC/G++ Compiler
3. Add MinGW `bin` folder to System PATH

Verify installation:

```bash
g++ --version
```

---

### Option 2: Visual Studio Community

1. Download Visual Studio Community Edition
2. Install **Desktop Development with C++**
3. Open Developer Command Prompt

Verify installation:

```bash
cl
```

---

### Option 3: Visual Studio Code + MinGW

Install:

* Visual Studio Code
* C/C++ Extension by Microsoft
* MinGW-w64

Verify:

```bash
g++ --version
```

---

## macOS

### Using Homebrew

Install Homebrew:

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

Install GCC:

```bash
brew install gcc
```

Verify:

```bash
g++ --version
```

---

### Using Xcode Command Line Tools

```bash
xcode-select --install
```

---

## Linux (Ubuntu / Debian)

Update packages:

```bash
sudo apt update
```

Install compiler:

```bash
sudo apt install build-essential g++
```

Verify:

```bash
g++ --version
```

---

## Linux (Fedora / CentOS / RHEL)

```bash
sudo dnf install gcc-c++
```

or

```bash
sudo yum install gcc-c++
```

Verify:

```bash
g++ --version
```

---

# ✅ Verify Installation

Create a test file:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "C++ Setup Successful!" << endl;
    return 0;
}
```

Save as:

```text
test.cpp
```

Compile:

```bash
g++ test.cpp -o test
```

Run:

```bash
./test
```

Output:

```text
C++ Setup Successful!
```

---

# 🚀 Clone Repository

```bash
git clone https://github.com/iampriyanshuraj01-beep/CPP-PROJECTS.git

cd CPP-PROJECTS
```

---

# ⚙️ Compiling Projects

## Basic Compilation

```bash
g++ filename.cpp -o output
```

Example:

```bash
g++ HospitalManagementSystem.cpp -o hospital
```

Run:

```bash
./hospital
```

Windows:

```bash
hospital.exe
```

---

# 🎯 Recommended Compiler Flags

## Show Warnings

```bash
g++ -Wall -Wextra filename.cpp -o output
```

## Debug Mode

```bash
g++ -g filename.cpp -o output
```

## Optimization

```bash
g++ -O2 filename.cpp -o output
```

## Professional Build

```bash
g++ -Wall -Wextra -std=c++11 -g -O2 filename.cpp -o output
```

---

# 📖 Compile Individual Projects

## 🏥 Hospital Management System

```bash
g++ HospitalManagementSystem.cpp -o hospital
./hospital
```

---

## 📦 Inventory Management System

```bash
g++ InventoryManagementSystem.cpp -o inventory
./inventory
```

---

## 🏦 Bank Account Management System

```bash
g++ BankAccountManagementSystem.cpp -o bank
./bank
```

---

## 👨‍💼 Employee Payroll System

```bash
g++ EmployeePayrollSystem.cpp -o payroll
./payroll
```

---

## 🎮 File-Based Quiz Game

```bash
g++ FileBasedQuizGame.cpp -o quiz
./quiz
```

---

# 🛠️ Using VS Code

## Install Extensions

* C/C++ (Microsoft)
* Code Runner

---

## Create Configuration

Create:

```text
.vscode/settings.json
```

```json
{
    "code-runner.executorMap": {
        "cpp": "cd $dir && g++ -std=c++11 $fileName -o $fileNameWithoutExt && ./$fileNameWithoutExt"
    }
}
```

Run using:

```text
Ctrl + Alt + N
```

---

# 🧪 Using a Makefile (Optional)

Create a file named:

```text
Makefile
```

```makefile
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = program

SRCS = *.cpp

all:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)
```

Commands:

```bash
make
make run
make clean
```

---

# 🐛 Troubleshooting

## "g++: command not found"

Install compiler:

Ubuntu:

```bash
sudo apt install g++
```

Windows:

Install MinGW-w64 and add to PATH.

---

## Permission Denied

Linux/macOS:

```bash
chmod +x output
./output
```

---

## Undefined Reference Errors

Compile all source files:

```bash
g++ *.cpp -o output
```

---

## C++ Standard Errors

Use C++11 or higher:

```bash
g++ -std=c++11 filename.cpp -o output
```

or

```bash
g++ -std=c++17 filename.cpp -o output
```

---

# 📊 Common Compiler Flags

| Flag       | Purpose         |
| ---------- | --------------- |
| -Wall      | Show warnings   |
| -Wextra    | Extra warnings  |
| -g         | Debug symbols   |
| -O2        | Optimization    |
| -std=c++11 | C++11 Standard  |
| -std=c++17 | C++17 Standard  |
| -o         | Output filename |

---

# 🚀 Running Projects

Most projects are menu-driven.

Simply execute:

```bash
./output
```

and follow the on-screen instructions.

---

# 💾 Git Workflow

## Clone

```bash
git clone https://github.com/iampriyanshuraj01-beep/CPP-PROJECTS.git
```

---

## Create Branch

```bash
git checkout -b feature-name
```

---

## Commit Changes

```bash
git add .
git commit -m "Add new feature"
```

---

## Push Changes

```bash
git push origin feature-name
```

---

# 📚 Useful Resources

### C++ Reference

https://en.cppreference.com

### Learn C++

https://www.learncpp.com

### GCC Documentation

https://gcc.gnu.org/onlinedocs

### Git Documentation

https://git-scm.com/doc

---

# ❓ FAQ

### Which C++ version should I use?

C++11 or higher is recommended.

---

### Can I run projects in VS Code?

Yes. Install the C/C++ extension and configure G++.

---

### How do I debug programs?

Compile with:

```bash
g++ -g filename.cpp -o output
```

and use GDB.

---

### Why am I getting linker errors?

Ensure all required source files are included during compilation.

---

# 🤝 Need Help?

* Read README.md
* Open an Issue
* Submit a Pull Request

---

<div align="center">

## Happy Coding with C++ 🚀

Made with ❤️ by Priyanshu Raj

</div>
