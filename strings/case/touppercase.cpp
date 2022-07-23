
#include <iostream>

void changeToUpperCase(char arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        char value = arr[i] - 32;
        printf("%c", value);
        /* code */
    }
}

int main(int argc, char const *argv[])
{
    char arr[5] = {'c', 'h', 'a', 'o', 's'};
    int len = sizeof(arr) / sizeof(arr[0]);
    changeToUpperCase(arr, len);
    return 0;
}
