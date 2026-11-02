#include <stdio.h>
int ktra(int N){
	if(N<=0) return 0;
	int S = 0;
	for(int i = 1 ; i <= N / 2 ; i++){
		if(N% i == 0){
			S+= i;
		}
	}
	if(S == N) return 1;
	return 0;
}
int main(){
	int N;
	scanf("%d",&N);
	int check = ktra(N);
	printf("%d %s so hoan hao",N,check?"la":"khong phai");
	return 0;
}
