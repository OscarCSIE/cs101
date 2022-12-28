#include <stdio.h>
#include<math.h>

int main()
{
    int x = 123;
    int th,si;
    th=(x/1000)%10;
    si=x%10;
    printf("%d", x-(1000*th)-si+(1000*si)+th);
    return 0;
}
