#include <iostream>
struct Array
{
    int A[10];
    int length;
    int size;
};

void linear_search_move_to_head(Array *arr, int value)
{
    int i;
    for (i = 0; i <arr->length; i++)
    {
        if(arr->A[i]==value){

            int temp=arr->A[i];
            arr->A[i]=arr->A[0];
            arr->A[0]=temp;
        }
    }
    
    
}
void Display(Array arr) {

	printf("\nElements are \n");
	for (size_t i = 0; i < arr.length; i++)
	{
		printf("%d ", arr.A[i]);
	}

}

int main(int argc, char const *argv[])
{
    Array arr1 = {{2, 3, 9, 16, 18}, 5, 10};

    linear_search_move_to_head(&arr1, 18);
    Display(arr1);
  //  printf("%d ", arr1);
    /* code */
    return 0;
}
