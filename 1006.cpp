#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    double a, b, c;
    double nota1, nota2, nota3;
    cin >> a;
    cin >> b;
    cin >> c; 
    nota1 = 2 * a;
    nota2 = 3 * b;
    nota3 = 5 * c;
    double pesosoma = 2 + 3 + 5;
    double media =  (nota1+nota2+nota3)/pesosoma;
    //cout << media;
    printf("MEDIA = %.1f\n", media);
}
