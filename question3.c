#include<stdio.h>

void reverse_string(char srr[], int start, int end) {
    if (start >= end)
        return;
    else {
        
        char temp = srr[start];
        srr[start] = srr[end];
        srr[end] = temp;
        
        
        reverse_string(srr, start + 1, end - 1);
    }
}

int main() {
    char srr[40];
    puts("Enter the string :");
    scanf("%[^\n]s", srr);

    int size = 0;
    while (srr[size] != '\0') {
        size++;
    }
    reverse_string(srr, 0, size - 1);

    puts("The reversed string is :");
    puts(srr);
    
    return 0;
}