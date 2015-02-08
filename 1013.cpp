#include<iostream>
#include<cstdio>

using namespace std;


int maiorAB(int a, int b){
    return (a+b+abs(a-b))/2;
}

int main (int argc, char ** argv){

    int a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    int novo = maiorAB(a,b);
    int resp = maiorAB(novo, c);

    printf("%d eh o maior\n",resp);

}
