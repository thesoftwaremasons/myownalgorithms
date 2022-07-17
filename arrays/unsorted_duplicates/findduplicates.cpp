#include <iostream>

using namespace std;

void findduplicates(int arr[], int length)
{

    for (int i = 0; i < length; i++)
    {
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < length; j++)
            {
                if (arr[i] == arr[j])
                {
                    printf("%d is a duplicate \n", arr[i]);
                    arr[j] = -1;
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{

    int arr[] = {3, 3, 9, 20, 12, 9, 2, 92, 10, 20};
    int length = sizeof(arr) / sizeof(arr[0]);
    findduplicates(arr, length);

    return 0;
}
