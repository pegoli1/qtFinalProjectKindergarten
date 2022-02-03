#include <string>

using namespace std;

class Board {
private:
    string ID;
    string color;
    float width;
    float height;
    float price;

public:
    Board();
    Board(string id,string color, float width, float height, float price);
    string getID();
    void setID(string id);
    string getColor();
    void setColor(string color);
    float getWidth();
    void setWidth(float width);
    float getHeight();
    void setHeight(float height);
    float getPrice();
    void setPrice(float price);
};

Board::Board() {}

Board::Board(string id,string color, float width, float height, float price) {
    this->ID =id;
    this->color = color;
    this->width = width;
    this->height = height;
    this->price = price;
}

string Board::getID() {
    return ID;
}

void Board::setID(string id) {
    Board::ID = id;
}

string Board::getColor() {
    return color;
}

void Board::setColor(string color) {
    Board::color = color;
}

float Board::getWidth() {
    return width;
}

void Board::setWidth(float width) {
    Board::width = width;
}

float Board::getHeight() {
    return height;
}

void Board::setHeight(float height) {
    Board::height = height;
}

float Board::getPrice() {
    return price;
}

void Board::setPrice(float price) {
    Board::price = price;
}
