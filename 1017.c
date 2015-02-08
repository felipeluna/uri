#include <stdio.h>
int main(int argc, const char *argv[])
{
    float time_spent, average_velocity, liters;
    scanf("%f",&time_spent);
    scanf("%f",&average_velocity);
    liters = (time_spent * average_velocity) / 12;
    printf("%.3f\n",liters);

    return 0;
}
