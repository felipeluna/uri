#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char ** argv){
    double pi =  3.14159;
    double R;
    cin >> R;
    double area = (R * R) * pi;
    printf("A=%.4f\n",area);
    return 0;

}
