#include <iostream>
#include "point.h"
#include <math.h>

using namespace std;

Point::Point(){
    x = 0;
    y = 0;
}
Point::Point(float _x, float _y){
    cout<<"Chamou construtor de Point\n";
    x=_x;
    y=_y;
}
Point::~Point(){
    cout<<"Chamou destrutor de Point\n";
}
void Point::setX(float _x){
    x=_x;
}
void Point::setY(float _y){
    y=_y;
}
void Point::setXY(float _x, float _y){
    x=_x;
    y=_y;
}
float Point::getX(){
    return x;
}
float Point::getY(){
    return y;
}
void Point::add(Point p2){
    p2.setXY(x + p2.getX(), y + p2.getY());
    p2.imprime();
}
void Point::sub(Point p2){
    p2.setXY(x - p2.getX(), y - p2.getY());
    p2.imprime();
}
float Point::norma(){
    float result;
    result = sqrt((x*x)+(y*y));
    return result;
}
void Point::imprime(){
    cout<< " ("<<x<<", "<<y<<") ";
}
void Point::translada(float a, float b){
    x = x + a;
    y = y + b;
}



