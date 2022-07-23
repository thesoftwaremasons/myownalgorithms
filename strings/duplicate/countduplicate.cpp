#include <string.h>
#include <iostream>

int countDuplicates(char arr[], int len, int highest)
{
    // int *temp = new int(highest);
    // memset(temp, 0, highest);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{

    char string[] = {'i', 'l', 'o', 'v', 'e', 'm', 'o', 'n', 'e', 'y'};
    int l = sizeof(string) / sizeof(string[0]);
    int h = string[l - 1];
    int v = countDuplicates(string, l, h);
    printf("total duplicates are %d", v);
    return 0;
}
