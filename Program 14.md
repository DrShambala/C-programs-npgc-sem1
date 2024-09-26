# Programme 14

### 19.	Print the Pythagorean triplets between 1 to 100. 
### (sum of square of two successive nos. is equal to the third one) 33+ 44=52 

```
#include <stdio.h>

int main() {
    int a, b, c;
    
    for(a=1;a<=100;a++){
        for(b=1;b<=100;b++){
            for(c=1;c<=100;c++){
                if(a*a+b*b==c*c){
                    printf("%d,%d,%d\n",a,b,c);
                }
            }
        }
    }
  

    return 0;
}
```
