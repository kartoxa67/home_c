#include <stdio.h>
#include <string.h>
#define SIZE_BUFF 10000

int main(void)
{
    int length = 0, count_uppercase = 0, count_lowercase = 0;
    char buffer[SIZE_BUFF];
    FILE* in = fopen("input.txt", "r");
    if(in == NULL)
        return 1;
    for(int i = 0; i < SIZE_BUFF; i++)
        fscanf(in, "%c", &buffer[i]);
    fclose(in);

    FILE* out = fopen("output.txt", "w");
    if(out == NULL)
        return 2;

    length = strlen(buffer);
    for (int i = 0; i < length; i++)
    {
        if((buffer[i] >= 'A') && (buffer[i] <= 'Z'))
            count_uppercase++;
        if((buffer[i] >= 'a') && (buffer[i] <= 'z'))
            count_lowercase++;
    }

    fprintf(out, "%d %d", count_lowercase, count_uppercase);
    fclose(out);
    return 0;
}

