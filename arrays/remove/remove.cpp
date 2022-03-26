#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

int remove(Array *arr,int index)
{
    int i;
    for (i = index; i < arr->length; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
  arr->length=arr->length-1;
    return 0;
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
    printf("\nPrevious\n");
    Display(arr1);
    remove(&arr1,0);
    Display(arr1);
    // int result = get(&arr1, 12);
    // printf("%d ", result);
    /* code */
    return 0;
}
