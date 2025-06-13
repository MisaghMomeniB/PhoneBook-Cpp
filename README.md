# 📇 PhoneBook (C++)

A simple yet powerful **console‑based phone book application** in modern C++ (C++11+), allowing you to store, search, edit, and delete contact details with ease.

---

## 📋 Table of Contents

1. [Overview](#overview)  
2. [Features](#features)  
3. [Tech Stack & Requirements](#tech-stack--requirements)  
4. [Installation & Build](#installation--build)  
5. [Usage Examples](#usage-examples)  
6. [Code Structure](#code-structure)  
7. [Persistence & File Format](#persistence--file-format)  
8. [Extensibility & Tips](#extensibility--tips)  
9. [Contributing](#contributing)  
10. [License](#license)

---

## 💡 Overview

This application manages a simple phone book using a console menu interface. You can add, view, search, update, and delete contacts. It's a great foundation for learning file I/O, data structures, and modular C++ program design.

---

## ✅ Features

- ➕ **Add contacts** with name, phone number, email, and (optional) address  
- 🔍 **Search contacts** by name or part of name  
- 📝 **Edit contacts** to update any field  
- ❌ **Delete contacts** safely with confirmation  
- 📄 **List all contacts** in tabular format  
- 💾 **Persistent storage** via a JSON or CSV‑like file (e.g., `contacts.db`)  
- 🔁 **Console menu** for easy navigation

---

## 🛠️ Tech Stack & Requirements

- **C++11+** (compatible with g++, clang++, or MSVC)  
- Uses `<fstream>`, `<vector>`, `<string>`, `<regex>` from standard library  
- No external dependencies or frameworks

---

## ⚙️ Installation & Build

```bash
git clone https://github.com/MisaghMomeniB/PhoneBook-Cpp.git
cd PhoneBook-Cpp
g++ -std=c++11 -o phonebook src/*.cpp
````

Or, using CMake:

```bash
mkdir build && cd build
cmake ..
make
```

Runs on:

* **Linux/macOS**: `./phonebook`
* **Windows**: `phonebook.exe`

---

## 🚀 Usage Examples

On startup:

```
=== PHONE BOOK ===
1) Add Contact
2) Search Contact
3) Edit Contact
4) Delete Contact
5) List All Contacts
6) Exit
Select option: 
```

### Add Contact:

```
Enter name: Alice Smith
Enter phone number: +1-555-1234
Enter email: alice@example.com
Enter address (optional): 123 Maple St
✅ Contact added with ID 3
```

### Search:

```
Search term: Alice
Found:
ID: 3 | Name: Alice Smith | Phone: +1-555-1234 | Email: alice@example.com
```

### Edit:

```
Enter ID: 3
New name (current: Alice Smith): Alicia Smith
...updates...
✅ Contact updated.
```

---

## 📁 Code Structure

```
PhoneBook-Cpp/
├── src/
│   ├── main.cpp        # Entry point + menu logic
│   ├── PhoneBook.cpp   # Core class implementation
│   ├── Contact.cpp     # Contact entity class
│   └── utils.cpp       # File I/O & validation helpers
├── include/
│   ├── PhoneBook.hpp
│   ├── Contact.hpp
│   └── utils.hpp
└── README.md           # This file
```

* `Contact` holds data fields & validation
* `PhoneBook` manages contact list and CRUD operations
* `utils` handles file read/write (JSON/CSV) and input checks

---

## 💾 Persistence & File Format

Contacts are saved to `contacts.db` (structured in JSON or CSV format):

```json
[
  {
    "id": 1,
    "name": "Alice Smith",
    "phone": "+1-555-1234",
    "email": "alice@example.com",
    "address": "123 Maple St"
  },
  ...
]
```

Upon launch, it loads the file; changes are saved after operations.

---

## 🔧 Extensibility & Tips

* 🗂️ Support multiple formats (XML, SQLite DB)
* 🔒 Add grouping/tags (family, work, etc.)
* 🕵️‍♂️ Add fuzzy search or phone/email validation via regex
* 🌐 Add CSV import/export option
* 📜 Architect GUI version later using Qt or ncurses

---

## 🤝 Contributing

Contributions welcome! To add features or improvements:

1. Fork the repository
2. Create a branch (`feature/...`)
3. Document changes clearly
4. Submit a Pull Request for review

---

## 📄 License

Licensed under the **MIT License** — see `LICENSE` for details.
