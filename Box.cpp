//
// Created by we7289 on 5/31/2021.
//

#include "Box.h"

Box::Box() {
    width = height = length = 0;
}

Box::Box(int width, int height, int length) {
    setWidth(width);
    setHeight(height);
    setLength(length);
}

double Box::getWidth() const {
    return width;
}

void Box::setWidth(double width) {
    if (width < 0)
        throw "Negative Dimension";

    this->width = width;
}

double Box::getHeight() const {
    return height;
}

void Box::setHeight(double height) {
    if (height < 0)
        throw "Negative Dimension";

    this->height = height;
}

double Box::getLength() const {
    return length;
}

void Box::setLength(double length) {
    if (length < 0)
        throw "Negative Dimension";

    this->length = length;
}

double Box::getSurfaceArea() const {
    double side1 = width*height;
    double side2 = width*length;
    double side3 = height*length;

    return 2*(side1+side2+side3);
}

double Box::getVolume() const {
    return width*length*height;
}

void Box::resize(double factor) {
    setWidth(width*factor);
    setHeight(height*factor);
    setLength(length*factor);
}
