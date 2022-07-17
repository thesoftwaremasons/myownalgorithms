#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

void using_hastable(int arr[10], int len)
{
    // lets assume the largest value is the last element
    // else get the largest value of the array

    int largestVal = arr[10];
    int smallestVal = arr[0];
    int *hash = new int(largestVal);
    // adding 0 to thee dynamic array
    memset(hash, 0, largestVal * sizeof(int)); // memoryset(array,totalLenght * size of int)

    for (int i = 0; i < len; i++)
    {
        int arrVal = arr[i];
        hash[arrVal] = 1;
    }

    for (int i = smallestVal; i < largestVal; i++)
    {
        int chek = hash[i];
        if (hash[i] == 0)
        {
            printf("missing element %d \n", i);
        }
    }
    //   delete[] hash;
}

int main(int argc, char const *argv[])
{

    int arr[] = {3, 4, 5, 6, 7, 9, 10, 12, 14, 16, 19};
    int arr2[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};

    int len = sizeof(arr2) / sizeof(arr2[0]);
    using_hastable(arr2, len);
    /* code */
    return 0;
}