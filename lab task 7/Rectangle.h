#pragma once
#include <string>

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); 
    Rectangle(float len, float wid);
    ~Rectangle(); 

    
    void setLength(float len);
    void setWidth(float wid);
    float getLength() const;
    float getWidth() const;

    
    float area() const;
};
