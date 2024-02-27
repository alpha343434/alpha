#include <stdio.h> 
main() { 
char str1[] = {'A', ' ', 's', 't', 'r', 'i', 'n', 'g', ' ', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'}; 
char str2[] = "Another string constant"; 
char *ptr_str="Assign a string to a pointer."; /* assign a string to a pointer */
int i; 
/* print out str1 */
for (i=0; str1[i]; i++)
printf("%c", str1[i]);
printf("\n"); 
printf("%s\n", str1);


/* print out str2 */
for (i=0; str2[i]; i++)
printf("%c", str2[i]);
printf("\n"); 

printf("%s\n", str2);
/* print out *ptr_str*/
printf("%s\n",ptr_str);

for (i=0;i<strlen(ptr_str); i++){

printf("%c",ptr_str[i]); 
}


return 0; 
}
