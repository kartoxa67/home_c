#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    FILE* in = fopen("input.txt", "r");
    if (in == NULL)
        return 1;
    fscanf(in, "%[^\n]", str);
    fclose(in);

    FILE* out = fopen("output.txt", "w");
    if (out == NULL)
        return 2;

    fprintf(out, "%s, ", str);
    fprintf(out, "%s, ", str);
    fprintf(out, "%s ", str);
    fprintf(out, "%lld",  strlen(str));

    fclose(out);

    return 0;
}
