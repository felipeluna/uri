#include <iostream>
#include <cstdio>

using namespace std;

float triang (float A, float C){
    float resp;
    resp = (A * C)/2;
    return resp;
}

float circ(float a){
    float pi = 3.14159;
    float resp = pi * (a * a);
    return resp;
}

float trap(float a, float b, float c){
    float resp;


    resp = ((a + b)/2) * c;


    return resp;
}

float quad (float a){
    return a * a;
}
float ret ( float a, float b){
    float resp = a * b;
    return resp;
}
int main (int argc, char ** argv){

    float A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;


    float triangulo = triang(A,C);
    float circulo = circ(C);
    float trapezio = trap(A,B,C);
    float quadrado = quad(B);
    float retangulo = ret(A,B);

    printf("TRIANGULO: %.3f\n",triangulo);
    printf("CIRCULO: %.3f\n",circulo);
    printf("TRAPEZIO: %.3f\n",trapezio);
    printf("QUADRADO: %.3f\n",quadrado);
    printf("RETANGULO: %.3f\n",retangulo);

}
