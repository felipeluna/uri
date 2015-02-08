#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char ** argv){
    int a, b, c, d;   

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    double um =  pow((c - a),2.0);
    double dois = pow((d - b),2.0);
    double resultado = um + dois;
    resultado = sqrt(resultado);

    printf("%.4f\n",resultado);

}
