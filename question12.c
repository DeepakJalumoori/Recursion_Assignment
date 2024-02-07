#include<stdio.h>
int sum(int n) {
    if (n==0) {
        return 0;
    }
     else
    return n%10+sum(n/10);

}
int main() {
    int n=456;
    sum(n);
   int result=sum(n);
   printf("%d",result);
}


