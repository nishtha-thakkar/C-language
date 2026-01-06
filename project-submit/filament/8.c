#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (i = 0; i < length / 2; i++) {
         if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    
    if (isPalindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }




    //sec task

    char str1[100];
    int freq[256] = {0}; 
    int j;

    printf("Enter any string: ");
    scanf("%s", str1);

    for (j = 0; str1[j] != '\0'; j++) {
        int index = (int)str1[j];      freq[index]++;           
    }

    
    printf("Output:\n");
    printf("Frequency of each letter:\n");
    
    for (j = 0; j< 256; j++) {

        if (freq[j] > 0) {
            printf("%c => %d\n", j, freq[j]);
        }
    }

}