# Tribonacci Series
```
#include <stdio.h>

int main() {
    int i,c,n,a,b,d;
    scanf("%d",&n);
    a=0,b=1,c=1;
    printf("%d ,%d ,%d ",a,b,c);
    for(i=1;i<=n;i++){
        d=a+b+c;
        printf(",%d ",c);
        a=b;
        b=c;
        c=d;
    }
    return 0;
}
```
