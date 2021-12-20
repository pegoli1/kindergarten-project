#include "Child.h"

Child::Child() {
    is_paid = false;
}

Child::Child(string firstName, string lastName, int age, int tuition) : Person(firstName, lastName),
                                                                        age(age), tuition(tuition) {
    is_paid = false;
}

int Child::getAge() {
    return age;
}

void Child::setAge(int age) {
    Child::age = age;
}

int Child::getTuition() {
    return tuition;
}

void Child::setTuition(int tuition) {
    Child::tuition = tuition;
}

bool Child::isPaid() {
    return is_paid;
}

void Child::setIsPaid(bool isPaid) {
    is_paid = isPaid;
}

