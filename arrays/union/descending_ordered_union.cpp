#include <iostream>

struct Array
{
    int A[10];
    int length;
    int size;
};

Array *reverse_ordered_union(Array *arr1, Array *arr2)
{
    Array *tempArray = (struct Array *)malloc(arr1->length + arr2->length);
    int i, j, k;
    i = arr1->length-1;
    j = arr2->length-1;
    k = 0;

    while (i > 0 && j > 0)
    {
         if (arr2->A[j] == arr1->A[i])
        {
            tempArray->A[k] = arr2->A[j];
            i--;
            j--;
        }
       else if (arr1->A[i] > arr2->A[j])
        {
            tempArray->A[k] = arr1->A[i];
            i--;
        }
        else if (arr2->A[j] > arr1->A[i])
        {
            tempArray->A[k] = arr2->A[j];
            j--;
        }
      
        k++;
    }
    // for (int i = length - 1; i >= 0; i--)
    // {
    //     /* code */
    // }
    
    for (int l=i-1; l >=0 ; l--)
    {
        tempArray->A[k] = arr1->A[l];
        k++;
    }
    for (int m=j-1; m>=0 ; m--)
    {
        tempArray->A[k] = arr2->A[m];
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
    Array *arr3 = reverse_ordered_union(&arr1, &arr2);
    Display(*arr3);

    return 0;
}
