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

    for (int i = 0; i < length; i++)
    {
        if ((buffer[i] == 65) || (buffer[i] == 97))
            fprintf(out, "%c", buffer[i] + 1);
        else if((buffer[i] == 66) || (buffer[i] == 98))
            fprintf(out, "%c", buffer[i] - 1);
        else fprintf(out, "%c", buffer[i]);
    }
    fclose(out);
    return 0;
}

