#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    
    printf("Enter the first string: ");
    scanf("%s", str1);

   
    printf("Enter the second string: ");
    scanf("%s", str2);

   
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}