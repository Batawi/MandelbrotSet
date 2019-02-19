#pragma once

#include <iostream>
#include <math.h>
#include <SFML/Graphics.hpp>
using namespace std;

class MandelBrot
{
public:
    MandelBrot(int window_width, int window_height); //tą metode bedzie trzeba rozdzielic
    void go();
    void control(string option);
    sf::VertexArray getArray();

private:
    pair<double, double> out_hor_range;
    pair<double, double> out_ver_range;
    pair<double, double> window_size; 
    sf::VertexArray points_arr;
    unsigned int max_iter;

    int mainEquation();
    sf::Color generateColor(unsigned int iterations, double prev_real, double prev_imaginary);

    //metoda zoom ktora bedzie zmieniac wartosci range'ow
};
