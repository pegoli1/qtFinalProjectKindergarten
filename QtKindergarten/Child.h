#include "Person.h"
#include <string>

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

Child::Child() {
	is_paid = false;
}

Child::Child(string firstName1, string lastName1, int age1, int tuition1) {
    firstName=firstName1;
    lastName=lastName1;
    age=age1;
    tuition=tuition1;
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

