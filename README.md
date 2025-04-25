![github banner](https://github.com/user-attachments/assets/e6b58c53-e1c7-40cf-98cb-07eb1665727d)

# 📇 Contact Management System

A simple **Contact Management System** written in C++ that allows users to manage their contacts seamlessly. With features like adding contacts, searching by name, viewing details, and sorting, this program is perfect for organizing and managing your personal or professional contacts.

## 🚀 Features

✨ **Add New Contacts**  
Easily add new contacts with a unique ID and name.

📞 **Add Phone Numbers**  
Add multiple phone numbers to an existing contact.

📜 **Show All Contacts**  
View all saved contacts in the list.

🔤 **Sort Contacts Alphabetically**  
Display contacts sorted by name for easy browsing.

🔍 **Search Contacts by Name**  
Quickly find a contact by entering its name.

🔎 **View Contact Details by ID**  
View all details (including phone numbers) for a specific contact.

🗑️ **Delete Contacts**  
Remove a contact from the list using its unique ID.

---

## 🛠️ How It Works

The program uses **C++ STL** (`vector`, `string`, and `algorithm`) to provide dynamic, flexible, and efficient contact management.

### Code Overview

1. **`struct Contact`**: Represents a contact with the following properties:  
   - `id`: Unique identifier for the contact.  
   - `name`: The name of the contact.  
   - `phoneNumbers`: A dynamic list of phone numbers.

2. **Global Variables**:  
   - `contacts`: A `vector` to store all contacts.  
   - `nextid`: An integer that auto-increments to assign unique IDs.

3. **Functions**:  
   - **`addContact()`**: Adds a new contact.  
   - **`addPhoneNumber()`**: Appends a phone number to an existing contact.  
   - **`showContacts()`**: Displays all contacts.  
   - **`showContactsSorted()`**: Displays contacts alphabetically.  
   - **`searchContactByName()`**: Finds a contact by name.  
   - **`viewContactDetails()`**: Shows details of a contact by ID.  
   - **`deleteContact()`**: Deletes a contact by ID.

4. **Main Menu**:  
   The program runs in a loop, displaying the following options:  
   ```
   Menu:
   1. Add contact
   2. Add phone number
   3. Show contacts
   4. Show contacts sorted alphabetically
   5. Search contact by name
   6. View contact details by ID
   7. Delete contact by ID
   8. Exit
   ```

---

## 📋 Example Usage

Here's what a typical session might look like:

```
Menu:
1. Add contact
2. Add phone number
3. Show contacts
4. Show contacts sorted alphabetically
5. Search contact by name
6. View contact details by ID
7. Delete contact by ID
8. Exit
Choice: 1
Enter contact name: Alice
Contact added successfully!

Choice: 2
Enter contact ID: 1
Enter phone number: 123-456-7890
Phone number added successfully!

Choice: 3
ID: 1, Name: Alice
```

---

## 🧰 Requirements

- A C++ compiler (e.g., GCC or Clang)  
- Basic understanding of compiling and running C++ programs.

---

## 🔧 Installation

1. **Clone the repository**:  
   ```bash
   git clone https://github.com/yourusername/contact-management-system.git
   cd contact-management-system
   ```

2. **Compile the code**:  
   ```bash
   g++ contact_management.cpp -o contact_management
   ```

3. **Run the program**:  
   ```bash
   ./contact_management
   ```

---

## 🌟 Features in Detail

### Adding Contacts  
Easily add a new contact by entering the name. Each contact is automatically assigned a unique ID.

### Adding Phone Numbers  
Enhance contacts by associating multiple phone numbers with them.

### Viewing All Contacts  
Quickly view all contacts, either unsorted or sorted alphabetically.

### Searching and Viewing Details  
Use the search feature to find contacts by name or view full details using their ID.

### Deleting Contacts  
Remove outdated or incorrect contacts from the list permanently.

---

## 💡 Improvements and Ideas

Future features to consider:  
- 📧 Adding email support for contacts.  
- 📁 Saving contacts to a file for persistence.  
- 🔒 Adding password protection for sensitive contact information.  

Feel free to contribute or share your ideas via issues or pull requests! 🎉

---

## 🤝 Contributing

Contributions are welcome! To contribute:  
1. Fork the repository.  
2. Create a feature branch: `git checkout -b feature-name`.  
3. Commit your changes: `git commit -m "Add feature"`.  
4. Push to the branch: `git push origin feature-name`.  
5. Open a pull request.

---

## 📝 License

This project is open-source and available under the MIT License.

---

## 🧑‍💻 Author

- **Your Name**  
  [GitHub Profile](https://github.com/MisaghMomeniB)
  [LinkedIn Profile](https://www.linkedin.com/in/MisaghMomeniB/)

---

Enjoy using the **Contact Management System**! 🚀
