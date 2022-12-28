#include<stdio.h>

int main(){
    double pi = 4.0;
    int index = 1;
    long pi_val = 0;
    int ans = 0;
    for(int i=3 ; i <= 1000000 ; i += 2){
    	if(index == 0){
    		pi+=(4.0 / i);
    		index++;
		}else{
			pi-=(4.0 / i);
			index--;
		}
		pi_val = pi*100000;
		if(pi_val == 314159){
			ans = i;
			break;
		}
	}
	printf("%d %.5f", ans , pi);
    return 0;
}
