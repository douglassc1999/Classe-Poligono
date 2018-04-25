#include <iostream>
#include <stdlib.h>
#include "point.h"
#include "poligono.h"
#include <math.h>

using namespace std;


int main(){

   char resp = 'a';
   cout<<"Voce quer saber informacoes sobre um retangulo(r) ou algum outro poligono(o)?\n";
   cin>>resp;
   while(resp !='e'){

   if(resp == 'e'){
       exit(0);
   }


   if(resp == 'r'){
    system("cls");
    float a, b, largura, altura;
    cout <<"Digite, na sequencia (x, y), as coordenadas do ponto inferior esquerdo do seu retangulo: \n";
    cin>>a>>b;
    cout<< "Agora digite a largura: "<<endl;
    cin>>largura;
    cout<< "...E a altura: \n";
    cin>>altura;

    Retangulo ret(a, b, largura, altura);

    ret.imprimePol();
    cout<<endl;

    cout<<"\nA area do retangulo eh: "<<ret.areapoli()<<endl;
    cout<<endl;

    ret.transladapoli(-3,4);
    ret.imprimePol();
    cout<<endl;
    cout<<"\nA area do retangulo depois de transladada eh: "<<ret.areapoli()<<endl;
    cout<<endl;
    ret.transladapoli(3,-4);
    ret.imprimePol();

    ret.centroide();
    ret.rotacionaPoli(1.5, 2, 30);
    cout<<"\nA area do retangulo depois de rotacionado eh: "<<ret.areapoli()<<endl;

    cout<<"Deseja fazer outra operacao?(s/n)\n";
    cin>>resp;
    if(resp == 's'){
        cout<<"Voce quer saber informacoes sobre um retangulo(r) ou algum outro poligono(o)?\n";
        cin>>resp;
    }else{
        exit(0);
    }
   }
   else if(resp == 'o'){
    system("cls");
    int tam = 0;
    cout<<"Quantos pontos terah o seu poligono?\n";
    cin>>tam;
       Poligono poli(tam);

           poli.setRet();
           cout<<"\nO numero de vertice eh: "<<poli.getV();
           poli.imprimePol();

           poli.centroide();
           poli.rotacionaPoli(0, 0, 180);
           cout << "A area do poligono depois de rotacionar eh: "<<poli.areapoli()<<endl;

           cout << "\nA area do poligono antes de translada eh: "<<poli.areapoli()<<endl;
           cout<<endl;
           poli.transladapoli(50, 50);
           cout << "A area do poligono depois de translada eh: "<<poli.areapoli()<<endl;
           poli.imprimePol();




    cout<<"Deseja fazer outra operacao?(s/n)\n";
    cin>>resp;
    if(resp == 's'){
        cout<<"Voce quer saber informacoes sobre um retangulo(r) ou algum outro poligono(o)?\n";
        cin>>resp;
    }else{
        exit(0);
    }
   }else{
       system("cls");
       cout<<"Voce tem de digitar 'r' para info sobre retangulo, 'o' para outro poligono.\nSe deseja sair digite 'e'\n";
       cin>>resp;

   }
   }
    return 0;
}
