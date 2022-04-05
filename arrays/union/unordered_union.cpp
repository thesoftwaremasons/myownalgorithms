#include <iostream>

struct Array
{
    int A[10];
    int length;
    int size;
};

Array *unordered_union(Array *arr1, Array *arr2)
{
    int j = 0;
    bool prevOcurrence = false;

    Array *tempArr = (struct Array *)malloc(arr1->size + arr2->size);

    for (int i = 0; i < arr1->length; i++)
    {
        tempArr->A[i] = arr1->A[i];
        j++;
    }
    
    for (int k = 0; k < arr2->length; k++)
    {
        for (int i = 0; i < arr1->length; i++)
        {
            if (arr2->A[k] == arr1->A[i])
            {
                prevOcurrence = true;
            }
        }
        if (prevOcurrence == false)
        {
            tempArr->A[j] = arr2->A[k];
             j++;
        }
            prevOcurrence=false;     
    }
    tempArr->length=j;
    tempArr->size=j;
    return tempArr;
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
    Array arr1 = {{2, 3, 9, 16, 18,21}, 6, 10};

    Array arr2 = {{3, 10, 19, 16, 28}, 5, 10};
    Array *arr3 = unordered_union(&arr1, &arr2);
    Display(*arr3);

    return 0;
}
