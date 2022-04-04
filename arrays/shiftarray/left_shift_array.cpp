#include <iostream>

struct Array
{
    int A[10];
    int length;
    int size;
};

Array *left_shift_array(Array *arr, int d)
{

    int j = 0;
    int i = d;

    Array *arr3 = (struct Array *)malloc(arr->size);
    for (i; i < arr->length; i++)
    {
        arr3->A[j] = arr->A[i];
        j++;
    }

    for (int k = d-1; k >= 0; k--)
    {
        arr3->A[j] = arr->A[k];
        i++;
        j++;
    }
    arr3->length=arr->length;
    arr3->size=arr->size;
    return arr3;
}
void Display(Array arr)
{

    printf("\nElements are \n");
    for (size_t i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
int main(int argc, char const *argv[])
{
    Array arr1 = {{2, 3, 9, 16, 18}, 5, 10};
    Array *arr = left_shift_array(&arr1, 5);

    Display(*arr);
    /* code */
    return 0;
}
