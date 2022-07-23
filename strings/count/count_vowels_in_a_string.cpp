

#include <iostream>

void countVowelsInASentence(char sentence[], int len)
{
    // a,e,i,o,u
    int counter = 0;
    for (int i = 0; i < len; i++)
    {

                if (sentence[i] == 'a' || sentence[i] == 'A' || sentence[i] == 'e' || sentence[i] == 'E' || sentence[i] == 'i' || sentence[i] == 'I' || sentence[i] == 'o' || sentence[i] == 'O' || sentence[i] == 'u' || sentence[i] == 'U')
        {
            counter++;
        }
        /* code */
    }
    printf("the total vowel value is %d", counter);
}

int main(int argc, char const *argv[])
{
    char sentence[] = "chaos is a ladder";
    int len = sizeof(sentence) / sizeof(sentence[0]);
    countVowelsInASentence(sentence, len);
    return 0;
}
