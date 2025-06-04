//Ethernal Entrophy

#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, c, d; 
    double r1, r2; 
    scanf("%d%d%d", &a, &b, &c); 
    d = b * b - 4 * a * c; 
    if (d < 0) 
    { 
        printf("No roots\n");
    } 
    else if (d == 0) 
    { 
        r1 = -b / (2.0 * a); 
        printf("One root: %.07f\n", r1); 
    } 
    else 
    { 
        r1 = (-b - sqrt(d)) / (2.0 * a); 
        r2 = (-b + sqrt(d)) / (2.0 * a); 
        printf("Two roots: %.07f %.07f\n", r1, r2); 
    }

    return 0;
}
