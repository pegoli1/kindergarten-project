#include "Person.h"

class Child : public Person {
private:
    int age;
    int tuition;
    bool is_paid;


public:
    Child();

    Child(string firstName, string lastName, int age, int tuition);

    int getAge();

    void setAge(int age);

    int getTuition();

    void setTuition(int tuition);

    bool isPaid();

    void setIsPaid(bool isPaid);

};

