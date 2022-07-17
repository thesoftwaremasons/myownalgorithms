#include <iostream>

void findMaxMin(int arr[], int len)
{
    int low = arr[0];
    int high = arr[len];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > high)
        {
            high = arr[i];
        }
        if (arr[i] < low)
        {
            low = arr[i];
        }
    }
    printf("high is:  %d and low is : %d", high, low);
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    findMaxMin(arr, len);

    return 0;
}
