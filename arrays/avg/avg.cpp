#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

float avg(Array *arr){
    int i;
    float result=0;
    for ( i = 0; i < arr->length; i++)
    {
        result+=arr->A[i];
    }
    return result/arr->length;
}

int main(int argc, char const *argv[])
{
    Array arr1 = { {2,3,9,16,18},5,10 };
    float result=avg(&arr1);
    printf("%.6f ",result);

    return 0;
}
