#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n < 2){
		printf("Khong phai so ngto");
		return 0;
	}
	for(int i =  2 ; i <= sqrt(n);i++){
		if(n % i == 0){
			printf("Khong phai so ngto");
			return 0;
		}
	}
	printf("%d la so ngto",n);
	return 0;
}
