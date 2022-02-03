#include <vector>
#include <string>
#include "Admin.h"
#include "Child.h"
#include "Desk.h"
#include "Board.h"

class Kindergarten {
private:
    Admin admin;
    vector<Child> children;
    vector<Desk> desks;
    vector<Board> boards;
    string address;
    int roomNumber;

public:
    Kindergarten();
    Kindergarten(Admin admin, vector<Child> children, vector<Desk> desks,
                 vector<Board> boards, string address, int roomNumber);
    Admin getAdmin();
    void setAdmin(Admin admin);
    vector<Child> getChildren();
    void addChild(Child child);
    vector<Desk> getDesks();
    void addDesk(Desk desk);
    vector<Board> getBoards();
    void addBoard(Board board);
    string getAddress();
    void setAddress(string address);
    int getRoomNumber();
    void setRoomNumber(int roomNumber);
};

Kindergarten::Kindergarten() {}

Kindergarten::Kindergarten(Admin admin, vector<Child> children, vector<Desk> desks,
	vector<Board> boards, string address, int roomNumber) {
	this->admin = admin;
	this->children = children;
	this->desks = desks;
	this->boards = boards;
	this->address = address;
	this->roomNumber = roomNumber;
}

Admin Kindergarten::getAdmin() {
	return admin;
}

void Kindergarten::setAdmin(Admin admin) {
	Kindergarten::admin = admin;
}

vector<Child> Kindergarten::getChildren() {
	return children;
}

void Kindergarten::addChild(Child child) {
	this->children.push_back(child);
}

vector<Desk> Kindergarten::getDesks() {
	return desks;
}

void Kindergarten::addDesk(Desk desk) {
	this->desks.push_back(desk);
}

vector<Board> Kindergarten::getBoards() {
	return boards;
}

void Kindergarten::addBoard(Board board) {

}

string Kindergarten::getAddress() {
	return address;
}

void Kindergarten::setAddress(const string address) {
	Kindergarten::address = address;
}

int Kindergarten::getRoomNumber() {
	return roomNumber;
}

void Kindergarten::setRoomNumber(int roomNumber) {
	Kindergarten::roomNumber = roomNumber;
}

