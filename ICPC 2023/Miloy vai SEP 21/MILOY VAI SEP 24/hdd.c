#include <stdio.h>
#include <math.h>

int main() 
{
    double A, B, C;
    double discriminant, root1, root2;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    discriminant = B * B - 4 * A * C;

    root1 = (-B + sqrt(discriminant)) / (2 * A);
    root2 = (-B - sqrt(discriminant)) / (2 * A);

    printf("%0.0lf\n", root1);
    printf("%0.0lf\n", root2);

    return 0;
}
