#include <iostream>

struct Array
{
    int A[10];
    int length;
    int size;
};

Array *right_shift_array(Array *arr, int d)
{

    Array *tempArray = (struct Array *)malloc(arr->size);
    int i;
    int j;
    int k=0;
    for (i = d; i < arr->length; i++)
    {
        tempArray->A[i] = arr->A[k];
        k++;
        
    }
    for (j = 0; j < d; j++)
    {
        tempArray->A[j] = arr->A[k];
        k++;
    }
    tempArray->length = arr->length;
    tempArray->size = arr->size;
    return tempArray;
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
    Array *arr = right_shift_array(&arr1, 1);

    Display(*arr);
    /* code */
    return 0;
}
