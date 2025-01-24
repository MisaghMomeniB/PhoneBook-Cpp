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
}