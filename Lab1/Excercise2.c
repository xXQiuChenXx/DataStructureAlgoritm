#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    double area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    // area = 3.14 * pow(radius, 2);
    area = 3.14 * radius * radius;
    printf("The area of the circle is %.2f \n", area);
    return 0;
}