#include <cstdio>
#include <iostream>
using namespace std;
int main(int argc, char ** argv){
    int A,B,C,D;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    int prod1 = A * B;
    int prod2 = C * D;
    int DIFERENCA = prod1 - prod2;
    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}
