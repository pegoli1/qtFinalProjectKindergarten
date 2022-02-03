#ifndef KINDERGARTEN_PERSON_H
#define KINDERGARTEN_PERSON_H

#include <string>

using namespace std;

class Person {
private:
public:
    string firstName;
    string lastName;
    string address;
    string phone;

 /*   Person();
    Person(string firstName, string lastName);
    string getFirstName();
    void setFirstName(string firstName);
    string getLastName();
    void setLastName(string lastName);
    string getAddress();
    void setAddress(string address);
    string getPhone();
    void setPhone(string phone);*/
};

#endif

/*
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
*/
