#include <string>

using namespace std;

class Desk {
private:
    string ID;
    string color;
    float width;
    float height;
    float price;
public:
    Desk();
    Desk(string id, string color, float width, float height, float price);
    string getID();
    void setID(string id);
    string getColor();
    void setColor(string desk);
    float getWidth();
    void setWidth(float width);
    float getHeight();
    void setHeight(float height);
    float getPrice();
    void setPrice(float price);
};

Desk::Desk() {}

Desk::Desk(string id, string color, float width, float height, float price) {
    this->ID = id;
	this->color = color;
	this->width = width;
	this->height = height;
	this->price = price;
}

string Desk::getID() {
    return ID;
}

void Desk::setID(string id) {
    Desk::ID = id;
}

string Desk::getColor() {
	return color;
}

void Desk::setColor(string color) {
	Desk::color = color;
}

float Desk::getWidth() {
	return width;
}

void Desk::setWidth(float width) {
	Desk::width = width;
}

float Desk::getHeight() {
	return height;
}

void Desk::setHeight(float height) {
	Desk::height = height;
}

float Desk::getPrice() {
	return price;
}

void Desk::setPrice(float price) {
	Desk::price = price;
}
