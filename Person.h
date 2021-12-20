#ifndef KINDERGARTEN_PERSON_H
#define KINDERGARTEN_PERSON_H

#include <string>

using namespace std;


class Person {
private:
    string firstName;
    string lastName;
    string address;
    string phone;
public:
    Person();

    Person(string firstName, string lastName);

    string getFirstName();

    void setFirstName(string firstName);

    string getLastName();

    void setLastName(string lastName);

    string getAddress();

    void setAddress(string address);

    string getPhone();

    void setPhone(string phone);
};

#endif