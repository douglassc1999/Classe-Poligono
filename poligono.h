#ifndef POLIGONO_H
#define POLIGONO_H
#include "Point.h"
#include <iostream>


// FALTA ROTACIONAR

using namespace std;
/**
 * @brief A classe Poligono declara um objeto que é uma sequencia de pontos (um poligono convexo).
 */

class Poligono{
protected:  // Protected para retângulo poder acessar as variáveis.
    // 'tam'' representa o número de pontos
   int tam;

    // Aloca vários objetos da classe Point - determinado
    // Pelo o usuário - no ponteiro 't'
   Point *t;

public:
    /**
     * @brief Poligono é o  construtor sem argumentos da classe Poligono.
     */
    Poligono();
    /**
     * @brief Poligono é um construtor com 1 argumento da classe Poligono.
     * @param _tam serve de parâmetro para saber o número de pontos que se quer alocar.
     */
    Poligono(int _tam);
    /**
     * @brief Poligono esse construtor com 4 argumentos é chamado quando se quer construir especificamente um retângulo.
     * @param x é a coordenada 'x' do ponto inferior a esquerda do retângulo.
     * @param y é a coordenada 'y' do ponto inferior a esquerda do retângulo.
     * @param largura é a largura do retângulo.
     * @param altura é a altura do retângulo.
     */
    Poligono(float x, float y, float largura, float altura);
    /**
      @brief ~Poligono é o destrutor da classe Poligono.
     */
    ~Poligono();
    
    //FUNÇÕES MEMBRO
    /**
     * @brief setRet seta os valore fornecidos pelos usuarios para a classe Point e armazena-os.
     */
    void setRet(void);
    /**
     * @brief areapoli calcula a área do poligono usando a fórmula de Shoelace.
     * @return retorna um float como área do polígono.
     */
    float areapoli(void);
    bool verificaConvexo(void);
    /**
     * @brief getV função para saber o número de vértices do polígono.
     * @return retorna um inteiro representando o número de vértices.
     */
    int getV(void);
    /**
     * @brief transladapoli translada todos os pontos do poligono somando-os a 'a' e a 'b'.
     * @param a parâmetro adicionada as coordenadas 'x' dos pontos do polígono.
     * @param b parâmetro adicionada as coordenadas 'y' dos pontos do polígono.
     */
    void transladapoli(float a, float b);
    /**
     * @brief rotacionaPoli Rotaciona o poligono em ang radianos.
     * @param a coordenada 'x' do ponto a qual se quer rotacionar.
     * @param b coordenada 'y' do ponto a qual se quer rotacionar.
     * @param ang é o ângulo, em radianos, a qual quer rotacionar.
     */
    void rotacionaPoli(float a, float b, float ang);

    void centroide(void);
    /**
     * @brief imprimePol mostra os pontos que formam o poligono na forma (x1, y1)->(x2, y2)...
     */
    void imprimePol(void);


};

// Declaração da subclasse Retangulo
// Herdada da classe Poligono
/**
 * @brief A classe Retangulo é herdeira da classe Poligono. Cria um poligono retangular (4 pontos).
 *
 */
class Retangulo : public Poligono{
public:
    /**
     * @brief Retangulo construtor de Retangulo.
     * @param x é a coordenada 'x' do ponto inferior a esquerda do retângulo.
     * @param y y é a coordenada 'y' do ponto inferior a esquerda do retângulo.
     * @param largura é a largura do retângulo.
     * @param altura é a altura do retângulo.
     */
    Retangulo(float x, float y, float largura, float altura) : Poligono(x, y, largura, altura){
            cout<<"chamou contrutor de Retangulo"<<endl;
    }
    /**
      @brief ~Retangulo é o destrutor da classe Retangulo.
     */
    ~Retangulo(){
        cout<<"chamou Destrutor de Retangulo"<<endl;
    };
};

#endif // POLIGONO_H
