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
