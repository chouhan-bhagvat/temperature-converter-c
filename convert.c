#include<stdio.h>

int main () {

    float c, fh;

    printf("Enter temerature in centigrade \n");
    scanf("%f", &c);

    fh = (c * 1.8) + 32;
    printf("Temerature in Fahrenheit is %f \n",fh);




    return 0;
}