#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

int min(Array *arr){
    int i;
    int min=arr->A[0];
    for ( i = 0; i < arr->length; i++)
    {
        if(arr->A[i]<min)
            min=arr->A[i];
    }
    return min;
}

int main(int argc, char const *argv[])
{
    Array arr1 = { {2,3,9,16,18},5,10 };
    int result=min(&arr1);
    printf("%d ",result);

    return 0;
}
