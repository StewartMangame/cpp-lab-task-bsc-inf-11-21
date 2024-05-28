#include "Box.h"
#include <iostream>

int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume =Box1.GetVolume();
    cout << "Volume of Box1 : " << volume << endl;

    volume = Box2.GetVloume();
    cout << "Volume of Box2 : " << volume << endl;

    Box3 = Box1 + Box2;

    volume = Box3.GetVolume();
    cout<< "Volume of Box3 : " << volume << endl;
    
    return 0;

}