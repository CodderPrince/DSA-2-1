#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int chocolateTimes[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &chocolateTimes[i]);
    }

    int aliceBars = 0, bobBars = 0;
    int left = 0, right = n - 1;
    int aliceTime = 0, bobTime = 0;

    while (left <= right) 
    {
        if (aliceTime <= bobTime) 
        {
            aliceTime = aliceTime + chocolateTimes[left];
            aliceBars++;
            left++;
        } 
        else 
        {
            bobTime = bobTime + chocolateTimes[right];
            bobBars++;
            right--;
        }
    }

    printf("%d %d\n", aliceBars, bobBars);

    return 0;
}
