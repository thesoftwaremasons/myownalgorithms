#include <iostream>

struct Array
{
    int A[10];
    int length;
    int size;
};

Array *reverse_using_temp_array(Array *arr)
{

    Array *arr3 = (struct Array *)malloc(arr->length);
    int i = arr->length - 1;
    int index = 0;
    for (i; i >= 0; i--)
    {
        arr3->A[index] = arr->A[i];
        index++;
    }

    arr3->length = arr->length;
    arr3->size = arr->size;
    return arr3;
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
    Array *arr3 = reverse_using_temp_array(&arr1);
    display(*arr3);

    return 0;
}
