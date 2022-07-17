#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

void count_duplicates(int arr[], int len, int largestArr)
{

    int *hash = new int(largestArr);

    memset(hash, 0, largestArr * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        int val = arr[i];

        hash[val] += 1;
    }
    for (int i = 0; i <= largestArr; i++)
    {

        if (hash[i] > 1)
        {

            printf("duplicates are %d and number of duplicates  is %d \n", i, hash[i]);
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 7, 7, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    int largestArr = arr[len - 1];
    count_duplicates(arr, len, largestArr);
    return 0;
}