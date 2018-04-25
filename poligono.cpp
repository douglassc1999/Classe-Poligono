#include <iostream>
#include "Poligono.h"
#include "Point.h"
#include <cmath>

using namespace std;

Poligono::Poligono(){
    //cout<<"Chamou Const sem arg de Poligono\n";
    tam = 0;
    t = new Point[0];
}
Poligono::Poligono(int _tam){
    //cout<<"Chamou Const com arg de Poligono\n";

     tam = _tam;
     t = new Point[_tam];
}
Poligono::Poligono(float x, float y, float largura, float altura){
   // cout<<"Chamou Const com arg de Retangulo de Poligono\n";
    tam = 4;
    t = new Point[4];
    t[0].setXY(x, y);
    t[1].setXY(x+largura, y);
    t[2].setXY(x+largura, y+altura);
    t[3].setXY(x, y+altura);



}
Poligono::~Poligono(){
   // cout<<"Chamou Destrutor de Poligono\n";
}

void Poligono::setRet(void){
    float a, b;
        for(int i=0;i<tam;i++){
            cout << "Insira o ponto "<< i <<endl;
            cin>>a>>b;
            t[i].setXY(a, b);
      }
}

void Poligono::imprimePol(){

   for(int i=0;i<tam;i++){
        t[i].imprime();

        if(i<tam-1){
            cout<<"->";
        }else{
            cout<<endl;
        }
   }
}

float Poligono::areapoli(void){
    Point *k = new Point[tam+1];
    for(int i = 0; i<tam;i++){
        k[i].setX(t[i].getX());
        k[i].setY(t[i].getY());
    }
    k[tam].setXY(t[0].getX(), t[0].getY());

    float area = 0;

    for(int i=1; i<=tam;i++){
        area = area + k[i-1].getX()*k[i].getY() - (k[i-1].getY()*k[i].getX());
    }

    area = area/2;
    if(area<0){
        return (-1*area);
    }else{
    return area;
    }
    delete []k;
}


int Poligono::getV(){
    return tam;
}

void Poligono::transladapoli(float a, float b){
    for(int i=0;i<tam;i++){
        t[i].translada(a, b);
    }
}

void Poligono::rotacionaPoli(float a, float b, float ang){

    ang = (ang*M_PI)/180;
    float newX, newY;
    for(int i=0;i<tam;i++){
        newX = a + (t[i].getX() - a) * cos(ang) - (t[i].getY() - b)*sin(ang);
        newY = b + (t[i].getX() - a)*sin(ang) + (t[i].getY() - b)*cos(ang);
        t[i].setXY(newX, newY);
    }
}

void Poligono::centroide(void)
{
    float cx=0, cy=0;
    Point *k = new Point[tam];
    for(int i = 0; i<tam;i++){
        k[i].setX(t[i].getX());
        k[i].setY(t[i].getY());
    }

    float area = areapoli();
   // cout <<"A area dentro da funcao centroide eh: "<<area<<endl;

    for(int i=0; i<(tam-1);i++){
        cx = cx + (k[i].getX() + k[i+1].getX())*(k[i].getX()*k[i+1].getY() - k[i].getY()*k[i+1].getX());
        cy = cy + (k[i].getY() + k[i+1].getY())*(k[i].getX()*k[i+1].getY() - k[i].getY()*k[i+1].getX());
    }

    cx = (1/(6*area))*cx;
    cy = (1/(6*area))*cy;

    cout<<"As coordenadas do centroide do Poligono sao: ("<<cx<<", "<<cy<<")\n";
    delete []k;
}


