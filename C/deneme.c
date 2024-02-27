
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp1, *fp2;
    char filename[100], c;
    int i, len;

    printf("Enter the filename to open for reading: ");
    scanf("%s", filename);

    fp1 = fopen(filename, "r");
    if (fp1 == NULL) {
        printf("Cannot open file %s\n", filename);
        exit(0);
    }

    printf("Reading the file...\n");
    fseek(fp1, 0, SEEK_END);
    len = ftell(fp1);
    fp2 = fopen(filename, "r+");
    i = 0;
    while (i < len) {
        i++;
        fseek(fp1, -i, SEEK_END);
        c = fgetc(fp1);
        fputc(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File reversed successfully.\n");

    return 0;
}
