#include <iostream>

void display_duplicates(int arr[], int len)
{

    int lastDuplicate = 0;
    for (int i = 1; i < len; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            if (lastDuplicate != arr[i - 1])
            {
                printf("duplicate is  %d \n", arr[i - 1]);
                lastDuplicate = arr[i - 1];
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 6, 7, 7, 7};
    display_duplicates(arr, 10);
    return 0;
}
