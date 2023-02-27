#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 40

// Helper function to reverse a string
void reverse(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
}

// Function to add two huge integers
char* add(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max_len = (len1 > len2) ? len1 : len2;
    char* result = (char*) malloc(sizeof(char) * (max_len + 1));

    int carry = 0, sum;
    int i = 0, j = 0, k = 0;

    while (i < len1 || j < len2) {
        int digit1 = (i < len1) ? num1[i] - '0' : 0;
        int digit2 = (j < len2) ? num2[j] - '0' : 0;
        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result[k++] = (sum % 10) + '0';
        i++;
        j++;
    }

    if (carry) {
        result[k++] = carry + '0';
    }

    result[k] = '\0';
//    reverse(result);
    return result;
}

// Function to subtract two huge integers
char* subtract(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max_len = (len1 > len2) ? len1 : len2;
    char* result = (char*) malloc(sizeof(char) * (max_len + 1));

    int borrow = 0, diff;
    int i = len1 - 1, j = len2 - 1, k = 0;

    while (i >= 0 || j >= 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        diff = digit1 - digit2 - borrow;

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result[k++] = diff + '0';
        i--;
        j--;
    }

    while (result[k - 1] == '0' && k > 1) {
        k--;
    }

    result[k] = '\0';
    reverse(result);
    return result;
}

int main() {
    char num1[MAX_DIGITS + 1];
    char num2[MAX_DIGITS + 1];

    printf("Enter the first huge integer: ");
    scanf("%s", num1);

    printf("Enter the second huge integer: ");
    scanf("%s", num2);

    // Calculate the sum and difference of the two huge integers
    char* sum = add(num1, num2);
    reverse(sum);
    char* difference;
    if (strcmp(num1,num2)>0){
        difference = subtract(num1, num2);
    }
    else{
        difference = subtract(num2, num1);
    }

    printf("The sum of the two numbers is %s\n",sum);
    printf("The difference of the two numbers is %s\n",difference);
    return 0;
}