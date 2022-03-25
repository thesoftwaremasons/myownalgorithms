#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

int sum(Array *arr){
    int i;
    int result=0;
    for ( i = 0; i < arr->length; i++)
    {
        result+=arr->A[i];
    }
    return result;
}

int main(int argc, char const *argv[])
{
    Array arr1 = { {2,3,9,16,18},5,10 };
    int result=sum(&arr1);
    printf("%d ",result);

    return 0;
}
