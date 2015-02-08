#include <stdio.h>
void solve(int num, int times); 
int main(int argc, const char *argv[])
{
    int num, times;
    scanf("%d %d",&num, &times);
    solve(num, times);
    return 0;
}
void solve(int num, int times)
{
    float result;
    float prices[] = {4.00,4.50,5.00,2.00,1.50};
    result = prices[num-1] * times;
    printf("Total: R$ %.2f\n",result);

}

