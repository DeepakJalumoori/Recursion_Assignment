#include<stdio.h>

int countg(int a[], int size, int x) {
    if (size == 0)
        return 0;
    else {
        if (a[size - 1] > x) 
            return 1 + countg(a, size - 1, x);
        else
            return countg(a, size - 1, x); 
    }
}

int main() {
    int a[6] = {2, 5, 6, 7, 4, 9};
    int x = 4;
    int count = countg(a, 6, x);
    printf("%d", count);
    return 0;
}