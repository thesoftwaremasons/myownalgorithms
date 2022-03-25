#include <iostream>

struct Array
{
    int A[10];
    int length;
    int size;
};

struct Array *merge(Array *arr1, Array *arr2)
{
    int length = arr1->size + arr2->size;
    Array *arr3 = (struct Array *)malloc(length);

    int i = 0;
    int j = 0;
    int index = 0;
    while (arr1->size > i && arr2->size > j)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[index] = arr1->A[i];
            i++;
        }
        else
        {
            arr3->A[index] = arr2->A[j];
            j++;
        }
        index++;
    }
    for (i; i < arr1->size; i++)
    {
        arr3->A[index] = arr1->A[i];
        index++;
    }
    for (j; j < arr2->size; j++)
    {
        arr3->A[index] = arr2->A[j];
        index++;
    }
    arr3->length = length;
    arr3->size = length;
    /* code */

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
    Array arr1 = {{2, 3, 9, 16, 18}, 10, 5};
    Array arr2 = {{1, 4, 5, 12, 17}, 10, 5};
    Array *arr3;
    arr3 = merge(&arr1, &arr2);
    Display(*arr3);

    return 0;
}
