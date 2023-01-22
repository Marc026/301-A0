#include "Box.h"

    //set WHL in this file to 0
Box::Box() {
    width = 0;
    height = 0;
    length = 0;

}

Box::Box(int width, int height, int length) {
    //point to private values of W, H, L to the W, H, L of Box.cpp
    setWidth(width);
    setHeight(height);
    setLength(length);
}
    //get width from Box
double Box::getWidth() const {
    return width;
}

void Box::setWidth(double width) {
    //check for bad value
    if (width < 0) {
        throw "Negative Dimension";
    }
    this->width = width;
}
    //get height from Box
double Box::getHeight() const {
    return height;
}

void Box::setHeight(double height) {
    //check for bad value
    if (height < 0) {
        throw "Negative Dimension";
    }
    this->height = height;
}
    //get length from Box
double Box::getLength() const {
    return length;
}

void Box::setLength(double length) {
    //check for bad value
    if (length < 0) {
        throw "Negative Dimension";
    }
    this->length = length;
}
    //multiply all sides and add them together then multiply by 2
double Box::getSurfaceArea() const {
    return 2*(width*height + width*length + height*length);
}
    //multiply WHL together
double Box::getVolume() const {
    return width*height*length;
}
    //multiply the sides by the factor
void Box::resize(double factor) {
    setWidth(factor*width);
    setHeight(factor*height);
    setLength(factor*length);
}
