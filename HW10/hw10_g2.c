#include <stdio.h>
#define LENGTH 53

int main(void)
{
    FILE* in = fopen("input.txt", "r");
    int number;
    char str[LENGTH] = {0};

    if(in == NULL)
        return 1;
    fscanf(in, "%d", &number);
    fclose(in);

    int digits = 50; // in ascii table '2' = 50
    for (int i = 1; i < number; i+=2)
    {
        if(digits >=57)
            digits = 50;
        str[i] = (char)digits;
        digits += 2;
    }

    int letters = 65;
    for (int i = 0; i < number; i+=2)
    {
        if(letters >= 91)
            letters = 65;
        str[i] = (char)letters;
        letters++;
    }

    FILE* out = fopen("output.txt", "w");
    if(out == NULL)
        return 2;
    fprintf(out, "%s", str);
    fclose(out);

    return 0;
}

