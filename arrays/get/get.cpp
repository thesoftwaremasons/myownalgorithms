#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

int get(Array *arr, int value)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == value)
            return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    Array arr1 = {{2, 3, 9, 16, 18}, 5, 10};
    
    int result = get(&arr1, 12);
    printf("%d ", result);
    /* code */
    return 0;
}
