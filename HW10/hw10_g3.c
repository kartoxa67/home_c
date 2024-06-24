#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[1000];
    FILE* in = fopen("input.txt", "r");
    if(in == NULL)
        return 1;
    fscanf(in, "%[^\n]", buffer);
    int length = strlen(buffer);
    fclose(in);

    FILE* out = fopen("output.txt", "w");
    if(out == NULL)
        return 2;

    for (int i = 0; i < length - 1; i++)
    {
        if(buffer[i] == buffer[length - 1])
            fprintf(out, "%d ", i);
    }

    fclose(out);
    return 0;
}

