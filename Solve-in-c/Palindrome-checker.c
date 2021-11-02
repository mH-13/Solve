#include <stdio.h>
#include <cstring>

int main()
{
    char str1[1000];
    int i, len, c = 0;
    gets(str1);
    len = strlen(str1);
    for (i = 0; i < len / 2; i++)
    {
        if (str1[i] == str1[len - i - 1])
        {
            c++;
        }
    }
    if (c == i)
        printf("This is a palindrome.");
    else
        printf("This is not a plaindrome.");

    return 0;
}
