#include <stdio.h>
#include <math.h>

int main() {
    double radius, volume, surface_area;
    const double pi = 3.14;

    // Prompt the user to enter the radius
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Calculate the volume of the sphere
    volume = (4.0 * pi * pow(radius, 3)) / 3.0;

    // Calculate the surface area of the sphere
    surface_area = 4.0 * pi * pow(radius, 2);

    // Display the results
    printf("Volume of the sphere: %.2lf\n", volume);
    printf("Surface area of the sphere: %.2lf\n", surface_area);

    return 0;
}
