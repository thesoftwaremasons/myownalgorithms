#include <iostream>

void findSumOfElement(int arr[], int len, int k)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < k)
        {
            int diff = k - arr[i];
            for (int j = i + 1; j < len; j++)
            {
                if (arr[j] == diff)
                {
                    printf("value is %d + %d \n", arr[i], arr[j]);
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int len = sizeof(arr) / sizeof(arr[2]);
    int k = 10;
    findSumOfElement(arr, len, k);

    return 0;
}
