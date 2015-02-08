#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc,char ** argv){
    int number,hours;
    double aph;

    cin >> number;
    cin >> hours;
    cin >> aph;

    double total = aph * hours;
    //cout << total;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n",total);

    return 0;
}
