#include "Person.h"
#include <string>

using namespace std;

class Admin : public Person {
private:
    string email;
    int salary;
public:
    Admin();
    Admin(string firstName, string lastName, string email, int salary);
    string getAdd();
    void setAddress(string add1);
    void setPhone(string add1);
    string getEmail();
    void setEmail(string email);
    int getSalary();
    void setSalary(int salary);
    void operator = (Admin admin1);
};

void Admin::operator = (Admin admin1) {
    this->email=admin1.email;
    this->salary=admin1.salary;
    this->firstName=admin1.firstName;
    this->lastName=admin1.lastName;
};

string Admin::getAdd() {
    return address;
}

void Admin::setAddress(string add1) {
    Admin::address=add1;
}

void Admin::setPhone(string phone1) {
    Admin::phone=phone1;
}

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

Admin::Admin(string firstName1, string lastName1, string email, int salary){
    this->firstName = firstName1;
    this->lastName = lastName1;
	this->email = email;
	this->salary = salary;
}

Admin::Admin() {}
