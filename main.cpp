/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on September 27, 2017, 12:33 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
double area;
class AdHocSquare {
public:
AdHocSquare(double side){
    this->side = side;
}
void set_side(double side)
{
    this->side = side;
}
double get_area()
{
    area = side * side;
    return area;
}
private:
double side;
};

class LazySquare {
public:
LazySquare(double side){
    this->side = side;
}
void set_side(double side)
{
    double oldSide;
    if(oldSide == side)
    {
        side_changed = false;
    }
    else
    {
        side_changed = true;
    }
    
    if(side_changed)
    {
        this->side = side;
        side_changed = false;
    }
}
double get_area()
{
    area = side*side;
    return area;
}
private:  
double side;
double area;
bool side_changed;
};

/*
 * 
 */
int main(int argc, char** argv) {

    AdHocSquare square1(3);
    cout << square1.get_area() << endl;
    square1.set_side(5);
    cout << square1.get_area() << endl;
    LazySquare square2(3);
    cout << square2.get_area() << endl;
    square2.set_side(5);
    cout << square2.get_area() << endl;
    return 0;
}

