# PRIME NUMBER
### prime number upto n
```
#include <stdio.h>

int main() {
    int i,j,c=0,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
        c=0;
        //checks prime number
      for(j=1;j<=i;j++){
          if(i%j ==0){
              c++;
          }
      }
      if(c==2){
          printf("%d ",i);
      }
  }
    return 0;
}
```
