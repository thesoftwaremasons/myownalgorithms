#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>

void findSumOfElement(int arr[], int len, int hv, int k)
{
    int *hashes = new int(hv);
    memset(hashes, 0, hv * sizeof(int));
    for (int i = 0; i < len; i++)
    {
        if (k < arr[i])
            continue;
        int diff = abs(k - arr[i]);

        if (hashes[diff] != 0)
        {
            printf("values area %d + %d  \n", arr[i], diff);
        }
        else
        {
            hashes[arr[i]] += 1;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int len = sizeof(arr) / sizeof(arr[2]);
    int k = 10;
    int hv = 16;
    findSumOfElement(arr, len, hv, k);

    return 0;
}
