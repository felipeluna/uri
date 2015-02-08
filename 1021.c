#include <stdio.h>
#include <math.h>
void separate_float(double number, int numbers[2]);
int calculo_cedulas(int cedula);
void calculo_moedas(int um_real, int moedas);
int main(int argc, const char *argv[])
{
    int numbers[2], um_real;
    double number; 
    scanf("%lf",&number);
    separate_float(number,numbers);
    printf("NOTAS:\n");
    um_real = calculo_cedulas(numbers[0]);
    printf("MOEDAS:\n");
    calculo_moedas(um_real,numbers[1]);
    return 0;
}
void separate_float(double number, int numbers[2])
{
   int int_part;
   double float_part;
   int_part = (int) number;
   float_part =  (number - int_part) * 100; 
   numbers[0] = int_part;
   numbers[1] = float_part;
}
int calculo_cedulas(int cedulas)
{
    int a[] = { 100, 50, 20, 10, 5, 2 };
    int i, atual;
    for (i = 0; i < 6; i++) {
        atual = cedulas / a[i];
        cedulas = cedulas % a[i];
        printf("%d nota(s) de R$ %d.00\n",atual,a[i]);
    }
    return cedulas;
}

void calculo_moedas(int um_real, int moedas)
{
    printf("%d moeda(s) de R$ 1.00\n",um_real);
    int a[] = { 50, 25, 10, 5, 1 };
    int i, atual;
    for (i = 0; i < 5; i++) {
        atual = moedas / a[i];
        moedas = moedas % a[i];
        printf("%d moeda(s) de R$ 0.%02d\n",atual,a[i]);
    }
}

