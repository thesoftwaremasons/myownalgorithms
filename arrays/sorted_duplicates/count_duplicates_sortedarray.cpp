#include <iostream>

void count_duplicates(int arr[], int len)
{
    int valueOccurance = 0;
    int countOcurrence = 1;
    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            int j = i + 1;
            while (arr[j] == arr[i])
            {
                j++;
            }
            printf("%d is appearing %d \n", arr[i], j - i);
            i = j - 1;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 6, 7, 7, 7};
    count_duplicates(arr, 10);
    return 0;
}