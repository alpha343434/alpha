#include <stdio.h>
#include <string.h>


void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = length - 1; i < j; i++,j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    FILE *inputfile=fopen("testData.txt","r");
    FILE *outputfile=fopen("testData.txt","a");
   
    if (inputfile == NULL) {
        printf("Error\n");
        return 1;
    }
    if (outputfile == NULL) {
        printf("Error\n");
        return 1;
    }
    
    char line[100];
    fseek(outputfile,0,SEEK_END);
    while (fgets(line, 100,inputfile)!=NULL) {
        reverseString(line);
        printf("%s\n",line);
        fprintf(outputfile,"%s",line);
    }
    fclose(inputfile);
    fclose(outputfile);
  
    return 0;
}

