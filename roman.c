#include <stdio.h>
#include <string.h>
int main(void)
{
    char roman[50];
    int final = 0;

    char num[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int val[] = {1, 5, 10, 50, 100, 500, 1000};

    printf("Input the Roman Numeral\n");
    scanf("%[^\n]s", roman);
    int l = strlen(roman);

    for (int i = l - 1; i >= 0; i--)
    {
        for (int j = 0; j < 8; j++)
        {
            if (roman[i] == num[j])
            {
                final = final + val[j];

                for (int k = 0; k < j; k++)
                {
                    if (i > 0 && roman[i - 1] == num[k])
                    {
                        final = final - val[k];
                        i--;
                        break;
                    }
                }
                break;
            }
        }
    }

    printf("Integer equivalent of %s = %d", roman, final);

    return 0;
}