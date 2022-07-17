#include <iostream>

void findSumOfElement(int arr[], int len, int k)
{
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            printf("%d + %d is %d \n", arr[i], arr[j], k);
            j--;
            i++;
        }
        else if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int len = sizeof(arr) / sizeof(arr[0]);
    int k = 10;
    findSumOfElement(arr, len, k);

    return 0;
}
