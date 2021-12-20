#include "Desk.h"

Desk::Desk() {}

Desk::Desk(string color, float width, float height, float price) {
    this->color = color;
    this->width = width;
    this->height = height;
    this->price = price;
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
