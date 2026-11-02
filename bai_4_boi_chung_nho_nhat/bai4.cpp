#include <stdio.h>
int bcnn(int a,int b){
	int i = (a > b) ? a : b;
	while(true){
		if(i % a == 0 && i % b == 0){
			return i;
		}
		i++;
	}
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("BCNN %d",bcnn(a,b));
	return 0;
}
