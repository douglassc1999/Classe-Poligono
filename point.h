#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

/**
 * @brief A classe Point serve para inserir as coordenadas
 * de um ponto e realizar diversas operações com ele.
 */
class Point{
private:
    float x, y;
public:
    /**
     * @brief Point é o construtor sem argumentos
    da classe Point
     */
    Point();
    /**
     * @brief Point é o  construtor com argumentos da classe Point
     * @param _x atribui a coordenada x do ponto.
     * @param _y atribui a coordenada y do ponto.
     */
    Point(float _x, float _y);
    /**
    * @brief ~Point é o Destrutor da classe Point.
    */
    ~Point();

    //Funções Membro

    /**
     * @brief setX seta a coordenada 'x' do ponto.
     * @param _x é argumento para a atribuição.
     */
    void setX(float _x);
    /**
     * @brief setY seta a coordenada 'y'
     * @param _y é argumento para a atribuição.
     */
    void setY(float _y);
    /**
     * @brief setXY Seta as coordenadas 'x' e 'y'
     * ao mesmo tempo.
     * @param _x é argumento para a atribuição.
     * @param _y é argumento para a atribuição.
     */
    void setXY(float _x, float _y);

    /**
     * @brief getX recupera a coordena x.
     * @return retorna o valor que está armazenado em 'x'.
     */
    float getX(void);
    /**
     * @brief getY recupera a coordena y.
     * @return retorna o valor que está armazenado em 'y'.
     */
    float getY(void);

    /**
     * @brief add soma as coordenadas 'x' e 'y'
     * as outras coordenadas 'a' e 'b' retornando outro ponto.
     * @param p2 é o ponto cuja coordenada será adicionada 'x' e 'y'.
     */
    void add(Point p2);
    /**
     * @brief sub subtrai as coordenadas 'x' e 'y'
     * as outras coordenadas 'a' e 'b' retornando outro ponto.
     * @param p2 é o ponto cuja coordenada será adicionada 'x' e 'y'.
     */
    void sub(Point p2);

    /**
     * @brief norma calcula a distância, ou norma entre os pontos 'x' e 'y'.
     * @return retorna o valor da norma.
     */
    float norma(void);
    /**
     * @brief imprime mostra na tela as coordenadas do ponto na forma "(a, b)"
     */
    void imprime(void);
    /**
     * @brief translada Soma a 'x' e a 'y' valores 'a' e 'b' para mudar o ponto de lugar.
     * @param a parâmetro somado a coordena 'x'.
     * @param b parâmetro somado a coordena 'y'.
     */
    void translada(float a, float b);
};

#endif // POINT_H
