#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char ** argv){
    double kilo, litro;

    cin >> kilo;
    cin >> litro;
    double resultado = kilo/litro;
    printf("%.3f km/l\n",resultado);    
}
