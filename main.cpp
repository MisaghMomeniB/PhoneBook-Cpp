#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Contact {
    int id;
    string name;
    vector<string> phoneNumbers;
};

vector<Contact> contacts;
int nextid = 1;

void addContact() {
    Contact contact;
    contact.id nextid++;
    cout << "Enter contact name: ";
    cin >> contact.name;
    contacts.push_back(contact);
    cout << "Contact added successfully!" << endl;
}

void addPhoneNumber() {
        int id;
    cout << "Enter contact ID: ";
    cin >> id;
    for (auto &contact : contacts) {
        if (contact.id == id) {
            string phoneNumber;
            cout << "Enter phone number: ";
            cin >> phoneNumber;
            contact.phoneNumbers.push_back(phoneNumber);
            cout << "Phone number added successfully!" << endl;
            return;
        }
    }
    cout << "Contact not found!" << endl;
}

void showContacts() {
    for (const auto &contact : contacts) {
        cout << "ID: " << contact.id << ", Name: " << contact.name << endl;
    }
}

void showContactsSorted() {
    vector<Contact> sortedContacts = contacts;
    sort(sortedContacts.begin(), sortedContacts.end(), [](const Contact &a, const Contact &b) {
        return a.name < b.name;
    });
    for (const auto &contact : sortedContacts) {
        cout << "ID: " << contact.id << ", Name: " << contact.name << endl;
    }
}

void searchContactByName() {
    string name;
    cout << "Enter name: ";
    cin >> name;
    for (const auto &contact : contacts) {
        if (contact.name == name) {
            cout << "ID: " << contact.id << ", Name: " << contact.name << endl;
            return;
        }
    }
    cout << "Contact not found!" << endl;
}

void viewContactDetails() {
    int id;
    cout << "Enter contact ID: ";
    cin >> id;
    for (const auto &contact : contacts) {
        if (contact.id == id) {
            cout << "ID: " << contact.id << ", Name: " << contact.name << endl;
            for (const auto &phone : contact.phoneNumbers) {
                cout << "Phone Number: " << phone << endl;
            }
            return;
        }
    }
    cout << "Contact not found!" << endl;
}

void deleteContact() {
    int id;
    cout << "Enter contact ID: ";
    cin >> id;
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->id == id) {
            contacts.erase(it);
            cout << "Contact deleted successfully!" << endl;
            return;
        }
    }
    cout << "Contact not found!" << endl;
}

int main() {
    int choice;
    do {
        cout << "\nMenu:\n"
             << "1. Add contact\n"
             << "2. Add phone number\n"
             << "3. Show contacts\n"
             << "4. Show contacts sorted alphabetically\n"
             << "5. Search contact by name\n"
             << "6. View contact details by ID\n"
             << "7. Delete contact by ID\n"
             << "8. Exit\n"
             << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addContact(); break;
            case 2: addPhoneNumber(); break;
            case 3: showContacts(); break;
            case 4: showContactsSorted(); break;
            case 5: searchContactByName(); break;
            case 6: viewContactDetails(); break;
            case 7: deleteContact(); break;
            case 8: cout << "Exiting the program!" << endl; break;
            default: cout << "Invalid choice!" << endl; break;
        }
    } while (choice != 8);

    return 0;
}