#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main (int argc, char **argv) {
    double longitudeA;
    double longitudeB;
    double latitudeA;
    double latitudeB;
    double airDistance;


    printf("Enter longitude A\n");
    scanf("%lf", &longitudeA);

    printf("Enter longitudeB\n");
    scanf("%lf", &longitudeB);

    printf("Enter latitudeA\n");
    scanf("%lf", &latitudeA);

    printf("Enter latitudeB\n");
    scanf("%lf", &latitudeB);

    printf("Location Distance\n");

    printf("==============================\n");

    printf("Origin:          (%lf, %lf)\n", latitudeA, longitudeA);

    printf("Designation:     (%lf, %lf)\n", latitudeB, longitudeB);

    latitudeA = (latitudeA/180) * M_PI;
    latitudeB = (latitudeB/180) * M_PI;
    longitudeA = (longitudeA/180) * M_PI;
    longitudeB = (longitudeB/180) * M_PI;

    airDistance = (acos((sin(latitudeA))* (sin(latitudeB))+ (cos(latitudeA))*(cos(latitudeB))*(cos(longitudeB - longitudeA)))*6371);
   
    printf("Air distance is %lf kms", airDistance);

    return 0;
}