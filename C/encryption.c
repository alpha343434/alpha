#include <stdio.h>
#include <string.h>


void encryption(char *s) {
    int i,length=strlen(s);
    for(i=0;i<length;i++) {
    	
        if (s[i] >= 'a'&& s[i]<= 'z'){
        	s[i]='a' + (s[i]- 'a' + 1)%26;
		}
        else if(s[i] >= 'A'&& s[i]<= 'Z'){
        	s[i]='A' + (s[i]- 'A' + 1)%26;
		}
    }
}

int main() {
    FILE *inputFile= fopen("testData.txt", "r");
    FILE *outputFile= fopen("encrypted.txt", "w");;
    char word[100];

    
    if (inputFile == NULL) {
        printf("Error.\n");
        return 1;
    }
    
    if (outputFile == NULL) {
        printf("Error.\n");
        return 1;
    }

    while (fgets(word, 100,inputFile) !=NULL) {
        encryption(word);
        fprintf(outputFile, "%s ", word);
    }

    fclose(inputFile);
    fclose(outputFile);


    return 0;
}

