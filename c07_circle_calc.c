#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surface_area = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3) * PI * pow(radius, 3);

    printf("Area: %.3lf", area);
    printf("\nSurfice Area: %.2lf", surface_area);
    printf("\nVolume: %.4lf", volume);
    return 0;
}