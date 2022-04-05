#include <iostream>

struct Array
{
    int A[10];
    int length;
    int size;
};

Array *ordered_union(Array *arr1, Array *arr2)
{
    Array *tempArray = (struct Array *)malloc(arr1->length + arr2->length);
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i < arr1->length && j < arr2->length)
    {
         if (arr2->A[j] == arr1->A[i])
        {
            tempArray->A[k] = arr2->A[j];
            i++;
            j++;
        }
       else if (arr1->A[i] < arr2->A[j])
        {
            tempArray->A[k] = arr1->A[i];
            i++;
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            tempArray->A[k] = arr2->A[j];
            j++;
        }
      
        k++;
    }
    for (i; i < arr1->length; i++)
    {
        tempArray->A[k] = arr1->A[i];
        k++;
    }
    for (j; j < arr2->length; j++)
    {
        tempArray->A[k] = arr2->A[j];
        k++;
    }
    tempArray->length = k;
    tempArray->size = k;
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
    Array arr1 = {{2, 3, 9, 16, 18, 21}, 6, 10};

    Array arr2 = {{3, 10, 19, 22, 28}, 5, 10};
    Array *arr3 = ordered_union(&arr1, &arr2);
    Display(*arr3);

    return 0;
}
