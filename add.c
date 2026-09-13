#include<stdio.h>
int main(){
    float a, b;
    printf("Enter a temperature for conversion:");
    scanf("%f", &a);
   b = (1.8*a) + 32;
   printf("Temperature is %.2f Farehneit", b);
}