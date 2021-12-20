#include "Admin.h"

string Admin::getEmail() {
    return email;
}

void Admin::setEmail(string email) {
    Admin::email = email;
}

int Admin::getSalary() {
    return salary;
}

void Admin::setSalary(int salary) {
    Admin::salary = salary;
}

Admin::Admin(string firstName, string lastName, string email, int salary)
        : Person(firstName, lastName) {
    this->email = email;
    this->salary = salary;
}


Admin::Admin() {}
