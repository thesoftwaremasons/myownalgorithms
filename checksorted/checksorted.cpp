#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

bool checkIfArrayIsSorted(Array *arr){

    int i = 0;
   
    for (i; i < arr->size - 1; i++)
    {
        if (arr->A[i] > arr->A[i+1])
        {

            return false;
        }
    
    }
    return true;
}
int main(int argc, char const *argv[])
{
    /* code */
    Array arr1 = { {2,3,9,16,18},10,5 };
    bool result=checkIfArrayIsSorted(&arr1);
    printf("%d ", result);
    return 0;
}