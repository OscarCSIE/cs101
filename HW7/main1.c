#include <stdio.h>

int main()
{
    int layers=7;
    int spaces=layers;
    for(int i = 1 ; i <= layers ; i++){
        printf("%*c",8-i,' ');
        for(int k = 1 ; k <= i ; k++){
          if(k == i){
            printf("%d",i);
            break;
          }
         printf("%d ",i);
        }
        printf("\n");
        spaces--;
    }
    return 0;
}
