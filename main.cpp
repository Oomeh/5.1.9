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

using namespace std;
double area;
class AdHocSquare {
public:
AdHocSquare(double side);
void set_side(double side);
double get_area()
{
    return area;
}
private:
double side;
};

class LazySquare {
public:
LazySquare(double side);
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
}
double get_area()
{
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
    
    return 0;
}

