#include <stdio.h>

int space(int x, int row){
    printf("%*c" , 2*x ,' ');
}
int stars(int x){
    for(int j=0;j<x;j++){
        if(j==x-1){
            printf("*");
        }else{
            printf("* ");
        }
    }
    printf("\n");
}

int main(){
    int row = 5;
    for(int i=0;i<row;i++){
        if(i){
            space(i,row);
        }
            stars((row-i)*2 - 1);
    }
    return 0;
}
