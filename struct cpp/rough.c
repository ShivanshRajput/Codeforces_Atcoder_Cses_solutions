#include <stdio.h>
void pyramid(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2)
        {
            arr[i / 2] = i + 1;
        }
        else
        {
            arr[n - 1 - i / 2] = i + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    pyramid(n);
}