#include <cstdio>
#include <iostream>

using namespace std;

int main (int argc, char ** argv){

    double valor = 0.00;
    int qnt = 2;
    for(int a = 0; a < qnt; a++){
        int code, qnt;
        double value;
        cin >> code;
        cin >> qnt;
        cin >> value;
        double res = qnt * value;
        valor = valor + res;
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", valor);

    return 0;
}
