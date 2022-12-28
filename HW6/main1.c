#include <stdio.h>

int main(){
    int n=26;
    if(n%15 ==0){
        printf("Love IU\n");
        return 0;
    }else if(n%3 ==0){
        printf("Love\n");
        return 0;
    }else if(n%5 ==0){
        printf("IU\n");
        return 0;
    }else{
        printf("%d\n",n);
    }
    return 0;
}
