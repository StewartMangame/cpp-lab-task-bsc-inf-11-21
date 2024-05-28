#pragma once
#include "Box.h"

Box:: Box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box :: Box (const double newlength , const double newBreadth, const double newHeight) {
    length = newlength;
    breadth = newBreadth;
    height = newHeight;
}

Box :: ~Box() {

}

double Box :: GetVolume(){
    return length * breadth * height;
}
void Box ::setLength(double len) {
    length = len;
}
void Box :: setBreadth(double bre){
    breadth = bre;
}
void Box :: setHeight(double hei){
    height = hei;
}
Box Box ::operator+(const Box& b) {
    Box Box;

    box.length = this -> length + b.length;
    box.breadth = this -> breadth + b.breadth;
    box,height = this -> height + b.height;
    return box;
}