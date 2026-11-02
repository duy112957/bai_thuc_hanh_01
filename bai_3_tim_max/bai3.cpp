#include <stdio.h>
#include <stdlib.h>
int timMax(int *a, int n){
	int m = *a;
	for(int i = 1 ; i < n ; i++){
		int v = *(a + i);
		if(v > m){
			m = v;
		}
	}
	return m;
}
int main(){
	int n;
	int *a;
	scanf("%d",&n);
	a = (int*)malloc(n * sizeof(int));
	for(int i = 0 ; i < n ; i++){
		scanf("%d",a + i);
	}
	printf("GTLN %d",timMax(a,n));
	free(a);
	a = NULL;
	return 0;
}
