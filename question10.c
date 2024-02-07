#include<stdio.h>
#include<string.h>

int string_length(char srr[]) {
    if (srr[0] == '\0') 
        return 0;
    else
        return 1 + string_length(srr + 1);
}

int main() {
    char srr[40];
    puts("Enter the string : ");
    scanf("%[^\n]s",srr);
    int size = string_length(srr);
    printf("The len of the string is : %d",size);
    return 0;
}