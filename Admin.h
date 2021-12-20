#include "Person.h"

class Admin : public Person {
private:
    string email;
    int salary;
public:
    Admin();

    Admin(string firstName, string lastName, string email, int salary);

    string getEmail();

    void setEmail(string email);

    int getSalary();

    void setSalary(int salary);

};

