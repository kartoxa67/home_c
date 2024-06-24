#include <stdio.h>
#include <string.h>

int is_palindrom(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    int is_palindrom = 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            is_palindrom = 0;
            return is_palindrom;
        }

        i++;
        j--;

    }
    if(is_palindrom)
        return is_palindrom;

    return 0;
}

int main(void)
{
    char buffer[1000];
    FILE* in = fopen("input.txt", "r");
    if(in == NULL)
        return 1;
    fscanf(in, "%[^\n]", buffer);
    fclose(in);
    FILE* out = fopen("output.txt", "w");
    if(out == NULL)
        return 2;

    if(is_palindrom(buffer))
        fprintf(out, "YES");
    else
        fprintf(out, "NO");

    fclose(out);

    return 0;
}

