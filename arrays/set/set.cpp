#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

void set(Array *arr, int index, int value)
{
    int i;
    for (i = arr->length; i > index; i--)
    {
        arr->A[i] = arr->A[i - 1];
    }
    arr->A[index] = value;
    arr->length = arr->length + 1;
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
    printf("\n Set Array elements are\n");
    set(&arr1, 2, 8);
    display(arr1);

    return 0;
}
