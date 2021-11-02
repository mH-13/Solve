#include <stdio.h>
#include <cstring>

char ispalindrome(char str1[1000])
{
    int i, j;

    for (i = 0, j = strlen(str1) - 1; i <= j; i++, j--)
    {
        if (str1[i] != str1[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str1[1000];
    gets(str1);
    bool c = ispalindrome(str1);

    if (c == true)
    {
        printf("This is a palindrome.");
    }
    else
    {
        printf("This is not a plaindrome.");
    }

    return 0;
}
