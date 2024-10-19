# Fibonacci Series

```
#include <stdio.h>

int main() {
    int i,c,n,a,b;
    scanf("%d",&n);
    a=0,b=1;
    printf("%d ,%d ",a,b);
    for(i=1;i<=n;i++){
        c=a+b;
        printf(",%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
```
