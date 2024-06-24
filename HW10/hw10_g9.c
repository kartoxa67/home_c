#include <stdio.h>
#include <string.h>
#define SIZE_BUFF 1000

int main(void)
{
    char buffer[SIZE_BUFF];
    FILE* in = fopen("input.txt", "r");
    if(in == NULL)
        return 1;
    fscanf(in, "%[^\n]", buffer);
    fclose(in);

    FILE* out = fopen("output.txt", "w");
    if(out == NULL)
        return 2;

    int length = strlen(buffer);
    if(buffer[0] != ' ')
        fprintf(out, "%c", buffer[0]);
    for (int i = 1; i < length; i++)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if((buffer[i] == buffer[j]) || (buffer[i] == ' ')){
                flag += 1;
                break;
            }
        }
        if (flag == 0)
            fprintf(out, "%c", buffer[i]);

    }

    fclose(out);
    return 0;
}

