#include <stdio.h>
#include<math.h>

int main()
{
    int n = 2;
    if(ceil(log2(n))-floor(log2(n))==0 && n!=1){
        printf("%d is true\n" ,n);
    }else{
        printf("%d is false\n" ,n);
    }
    return 0;
}
