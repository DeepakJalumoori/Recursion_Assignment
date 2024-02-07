#include<stdio.h>
void nnum(int n) {
    if(n==0) return;
    else nnum(n-1);
    printf("%d ",n);
    return;
}
int main() {
int n=50;
nnum(n);
}