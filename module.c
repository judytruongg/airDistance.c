#include<stdio.h>
#include<stdlib.h>

int main(void){
    double x;
    double y;
    double z;

    scanf("%lf", &x);
    scanf("%lf", &y);

    z = sqrt(fabs(x) - pow(y,3.0));

    printf("%.2lf",z);

    return 0;
}
