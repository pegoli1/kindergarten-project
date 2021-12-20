

#include "Person.h"
#include <string>


Person::Person() {}

Person::Person(string firstName, string lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
}

string Person::getFirstName() {
    return firstName;
}

void Person::setFirstName(const string firstName) {
    Person::firstName = firstName;
}

string Person::getLastName() {
    return lastName;
}

void Person::setLastName(const string lastName) {
    Person::lastName = lastName;
}

string Person::getAddress() {
    return address;
}

void Person::setAddress(string address) {
    Person::address = address;
}

string Person::getPhone() {
    return phone;
}

void Person::setPhone(string phone) {
    Person::phone = phone;
}
