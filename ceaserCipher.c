#include <stdio.h>

int main()
{
    int shift, base, crypted;
    char ch;
    do
    {
        printf("Please enter shift number that you want.(0 or negative numbers are not allowed) :");
        scanf("%d", &shift);
    } while (shift <= 0);
    printf("Please enter only alphabetic characters and spaces :");
    while ((scanf("%c", &ch)) != EOF)
    {

        if (ch == ' ')
        {
            printf("%c", ch);
        }
        else if (ch <= 'z' && ch >= 'a')
        {
            crypted = ch + shift;
            if (crypted > 'z')
            {
                crypted = crypted - 'z' - 1 + 'a';
            }
            printf("%c", crypted);
        }
        else if (ch <= 'Z' && ch >= 'A')
        {
            crypted = ch + shift;
            if (crypted > 'Z')
            {
                crypted = crypted - 'Z' - 1 + 'A';
            }
            printf("%c", crypted);
        }
    }
    return 0;
}