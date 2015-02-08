#include <cstdio> //cin, cout
#include <iostream> // printf, fopen,...

using namespace std;

int main(int argc, char ** argv){
    double nota1, nota2;
    cin >> nota1;
    cin >> nota2;
    double soma = (nota1*3.5) + (nota2*7.5);
    double media = soma /11;

    printf("MEDIA = %.5f\n",media);
}
