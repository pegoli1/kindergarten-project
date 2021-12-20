#include "Board.h"

Board::Board() {}

Board::Board(string color, float width, float height, float price) {
    this->color = color;
    this->width = width;
    this->height = height;
    this->price = price;
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
