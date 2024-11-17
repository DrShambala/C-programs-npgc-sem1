# Program 24
###  print fibonacci series using recursion
```
#include <stdio.h>
int fibo(int n);
int count=0,a=0,b=1;
int main() {
    int n;
    scanf("%d",&n);
    printf("0,1");
    fibo(n);
    return 0;
}

int fibo(int n){
    int c;
    if(count==n){
        return 1;
    }
    else{
        c=a+b;
        a=b;
        b=c;
        count++;
        printf(",%d",c);
        fibo(n);
    }
}
```
