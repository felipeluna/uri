#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char ** argv0){
    string nome;
    double salario;
    double venda;

    cin >> nome;
    cin >> salario;
    cin >> venda;

    double total = ((15.0 * venda)/100) + salario;

    printf("TOTAL = R$ %.2lf\n",total);


    return 0;
}
