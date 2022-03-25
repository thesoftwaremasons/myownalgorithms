#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

int binarySearch(Array *arr, int low, int high, int value)
{

    int mid = (high + low) / 2;

    if (arr->A[mid] == value)
        return 1;

    if (arr->A[mid] < value)
    {

        return binarySearch(arr, mid+1, high, value);
    }
    if (arr->A[mid] > value)
        return binarySearch(arr, low, mid-1, value);

    return 0;
}

int main(int argc, char const *argv[])
{
    Array arr1 = {{2, 3, 9, 16, 18}, 5, 10};
   int result= binarySearch(&arr1,0,arr1.length,18);
   printf("%d ",result);
    /* code */
    return 0;
}
