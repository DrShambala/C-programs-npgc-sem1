# PERFECT NUMBER

```
#include <stdio.h>

int main() {
    int i,j,s,n,p;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        // p=i*2;
        s=0;
        p=1;
        for(j=1;j<i;j++){
            if(i%j ==0){
              s=s+j;
          }
      }
      if(s==i){
          printf("%d ",i);
      }
}
    return 0;
}
```
