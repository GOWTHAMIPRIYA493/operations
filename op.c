#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>



int main()
{
int tip_percent, tax_percent;
float meal_cost;
 scanf("%f",&meal_cost);
 scanf("%d",&tip_percent);
 scanf("%d",&tax_percent);
 float a, b, c;
    a = (meal_cost * tip_percent) / 100;
    b = (meal_cost * tax_percent) / 100;
    c = (meal_cost + a + b);
    printf("%0.f",c);
    return 0;
}
