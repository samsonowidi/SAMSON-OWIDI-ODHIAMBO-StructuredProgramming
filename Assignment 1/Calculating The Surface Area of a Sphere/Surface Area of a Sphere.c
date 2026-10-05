#include <stdio.h>
#include <stdlib.h>

int main()
{
      float radius, surface_area;
    const float PI = 3.14159;


    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);


    surface_area = 4 * PI * radius * radius;


    printf("Surface Area of the sphere = %.2f\n", surface_area);

    return 0;
}
