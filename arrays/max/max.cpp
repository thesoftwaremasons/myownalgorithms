#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

int max(Array *arr){
    int i;
    int max=arr->A[0];
    for ( i = 0; i < arr->length; i++)
    {
        if(arr->A[i]>max)
            max=arr->A[i];
    }
    return max;
}

int main(int argc, char const *argv[])
{
    Array arr1 = { {28,2,3,91,16,12},5,10 };
    int result=max(&arr1);
    printf("%d ",result);

    return 0;
}
