#include <stdio.h>
#include <stdlib.h>
#define PI 3.142
int main()
{
    float base,height,radius;
    printf("Enter base and height to find area of triangle\n");
    scanf("%f %f",&base,&height);
    float area_Of_triangle=1.0/2*base*height;
     printf("Area of Triangle=%.2f\n",area_Of_triangle);
    printf("Enter radius to find area of circle\n");
    scanf("%f",&radius);
    float area_of_circle=PI*radius*radius;
    printf("Area of Circle=%.2f\n",area_of_circle);
    return 0;
}
