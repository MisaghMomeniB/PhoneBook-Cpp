#include <iostream>  // Include input-output stream library for console input and output
#include <vector>    // Include vector library for dynamic arrays
#include <algorithm> // Include algorithm library for sorting
#include <string>    // Include string library for working with strings
using namespace std; // Use the standard namespace to simplify code

// Define a structure to represent a contact
struct Contact {
    int id;                   // Unique ID for the contact
    string name;              // Name of the contact
    vector<string> phoneNumbers; // Vector to store multiple phone numbers for the contact
};

// Global variables
vector<Contact> contacts; // Vector to store the list of contacts
int nextid = 1;           // Variable to generate unique IDs for contacts, starting from 1

// Function to add a new contact
void addContact() {
    Contact contact;         // Create a new contact
    contact.id = nextid++;   // Assign a unique ID and increment the ID counter
    cout << "Enter contact name: "; 
    cin >> contact.name;     // Take the contact name as input from the user
    contacts.push_back(contact); // Add the contact to the list of contacts
    cout << "Contact added successfully!" << endl; // Confirmation message
}

// Function to add a phone number to an existing contact
void addPhoneNumber() {
    int id; // Variable to store the contact ID
    cout << "Enter contact ID: ";
    cin >> id; // Take the contact ID as input from the user
    for (auto &contact : contacts) { // Iterate through the contacts
        if (contact.id == id) { // Check if the contact ID matches
            string phoneNumber; 
            cout << "Enter phone number: ";
            cin >> phoneNumber; // Take the phone number as input
            contact.phoneNumbers.push_back(phoneNumber); // Add the phone number to the contact
            cout << "Phone number added successfully!" << endl; // Confirmation message
            return; // Exit the function after adding the phone number
        }
    }
    cout << "Contact not found!" << endl; // Message if the contact ID does not exist
}

// Function to display all contacts
void showContacts() {
    for (const auto &contact : contacts) { // Iterate through all contacts
        cout << "ID: " << contact.id << ", Name: " << contact.name << endl; // Display ID and name
    }
}

// Function to display all contacts sorted alphabetically by name
void showContactsSorted() {
    vector<Contact> sortedContacts = contacts; // Create a copy of the contacts vector
    // Sort the copy using a lambda function to compare names
    sort(sortedContacts.begin(), sortedContacts.end(), [](const Contact &a, const Contact &b) {
        return a.name < b.name; // Compare the names alphabetically
    });
    for (const auto &contact : sortedContacts) { // Iterate through sorted contacts
        cout << "ID: " << contact.id << ", Name: " << contact.name << endl; // Display ID and name
    }
}

// Function to search for a contact by name
void searchContactByName() {
    string name; // Variable to store the name to search
    cout << "Enter name: ";
    cin >> name; // Take the name as input from the user
    for (const auto &contact : contacts) { // Iterate through the contacts
        if (contact.name == name) { // Check if the contact name matches
            cout << "ID: " << contact.id << ", Name: " << contact.name << endl; // Display matching contact
            return; // Exit the function after finding the contact
        }
    }
    cout << "Contact not found!" << endl; // Message if no matching contact is found
}

// Function to view details of a contact by ID
void viewContactDetails() {
    int id; // Variable to store the contact ID
    cout << "Enter contact ID: ";
    cin >> id; // Take the contact ID as input from the user
    for (const auto &contact : contacts) { // Iterate through the contacts
        if (contact.id == id) { // Check if the contact ID matches
            cout << "ID: " << contact.id << ", Name: " << contact.name << endl; // Display contact details
            for (const auto &phone : contact.phoneNumbers) { // Iterate through phone numbers
                cout << "Phone Number: " << phone << endl; // Display each phone number
            }
            return; // Exit the function after displaying details
        }
    }
    cout << "Contact not found!" << endl; // Message if the contact ID does not exist
}

// Function to delete a contact by ID
void deleteContact() {
    int id; // Variable to store the contact ID
    cout << "Enter contact ID: ";
    cin >> id; // Take the contact ID as input from the user
    for (auto it = contacts.begin(); it != contacts.end(); ++it) { // Iterate through the contacts
        if (it->id == id) { // Check if the contact ID matches
            contacts.erase(it); // Erase the contact from the vector
            cout << "Contact deleted successfully!" << endl; // Confirmation message
            return; // Exit the function after deleting the contact
        }
    }
    cout << "Contact not found!" << endl; // Message if the contact ID does not exist
}

// Main function
int main() {
    int choice; // Variable to store the user's menu choice
    do {
        // Display the menu
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
        cin >> choice; // Take the user's choice as input

        // Perform the action based on the user's choice
        switch (choice) {
            case 1: addContact(); break; // Add a new contact
            case 2: addPhoneNumber(); break; // Add a phone number to an existing contact
            case 3: showContacts(); break; // Display all contacts
            case 4: showContactsSorted(); break; // Display contacts sorted alphabetically
            case 5: searchContactByName(); break; // Search for a contact by name
            case 6: viewContactDetails(); break; // View details of a contact by ID
            case 7: deleteContact(); break; // Delete a contact by ID
            case 8: cout << "Exiting the program!" << endl; break; // Exit the program
            default: cout << "Invalid choice!" << endl; break; // Handle invalid input
        }
    } while (choice != 8); // Repeat until the user chooses to exit

    return 0; // End of the program
}