#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int length1 = 0, length2 = 0;

    
    printf("Enter the first string: ");
    scanf("%s", str1);

   
    printf("Enter the second string: ");
    scanf("%s", str2);

    
    while (str1[length1] != '\0') {
        length1++;
    }

    
    while (str2[length2] != '\0') {
        str1[length1] = str2[length2];
        length1++;
        length2++;
    }

    
    str1[length1] = '\0';

    
    printf("Concatenated string: %s\n", str1);

    return 0;
}