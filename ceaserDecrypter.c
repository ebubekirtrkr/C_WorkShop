#include <stdio.h>

int main()
{
    int shift, base, crypted;
    char ch;
    do
    {
        printf("Please enter shift number that you want.(0 or negative numbers are not allowed) :");
        printf("If you don't know the shift number enter -1 to evaluate all shifting :");
        scanf("%d", &shift);
    } while (shift <= -2 || shift == 0);
    if (shift == -1)
    {
        printf("Please enter crypted wordk :");
        for (int i = 0; i < 26; i++)
        {
            shift = i;

            while ((scanf("%c", &ch)) != EOF)
            {
                if (ch == ' ')
                {
                    printf("%c", ch);
                }
                else if (ch <= 'z' && ch >= 'a')
                {
                    crypted = ch - shift;
                    if (crypted < 'a')
                    {
                        crypted = crypted - 'a' + 1 + 'z';
                    }
                    printf("%c", crypted);
                }
                else if (ch <= 'Z' && ch >= 'A')
                {
                    crypted = ch + shift;
                    if (crypted > 'Z')
                    {
                        crypted = crypted - 'A' + 1 + 'Z';
                    }
                    printf("%c", crypted);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Please enter crypted word :");
        while ((scanf("%c", &ch)) != EOF)
        {

            if (ch == ' ')
            {
                printf("%c", ch);
            }
            else if (ch <= 'z' && ch >= 'a')
            {
                crypted = ch - shift;
                if (crypted < 'a')
                {
                    crypted = crypted - 'a' + 1 + 'z';
                }
                printf("%c", crypted);
            }
            else if (ch <= 'Z' && ch >= 'A')
            {
                crypted = ch + shift;
                if (crypted > 'Z')
                {
                    crypted = crypted - 'A' + 1 + 'Z';
                }
                printf("%c", crypted);
            }
        }
    }
    return 0;
}