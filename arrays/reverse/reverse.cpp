#include <iostream>

struct Array
{
    int A[10];
    int length;
    int size;
};

void reverseArray(Array *arr)
{
    int i;
    int j = arr->length - 1;
    for (i = 0; i < arr->length; i++)
    {
        if (i < j)
        {
            int temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
            j--;
        }
    }
}
void display(Array arr)
{

    
    for (size_t i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
int main(int argc, char const *argv[])
{
    Array arr1 = {{2, 3, 9, 16, 18}, 5, 10};
   printf("\n Array elements are\n");
   display(arr1);
   printf("\n Reverse Array elements are\n");
   reverseArray(&arr1);
   display(arr1);


    return 0;
}
