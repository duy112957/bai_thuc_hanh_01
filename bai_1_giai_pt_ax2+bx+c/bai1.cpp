#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Vo so nghiem");
			}else{
				printf("Vo nghiem");
			}
		}else{
			printf("x = %.2f", -c/b);
		}
	}else{
		float delta = b * b - 4 * a *c;
		if(delta < 0){
			printf("Vo nghiem");
		}else if(delta == 0){
			printf("x = %.2f", - b / (2 * a));
		}else{
			float x1 = (-b + sqrt(delta)) / (2  * a);
			float x2 = (-b - sqrt(delta)) / (2  * a);
			printf("x1 = %.2f, x2 = %.2f",x1,x2);
		}
	}
}
