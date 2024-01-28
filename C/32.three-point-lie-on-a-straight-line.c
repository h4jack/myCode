//write a program to check threee point lies on a straight line or not.
#include<stdio.h>

int main(){
    float a1, a2, b1, b2, c1, c2;
    printf("Enter point 1 e.g. 1,2: ");
	scanf("%f, %f",&a1,&a2);
	printf("Enter point 2 e.g. 6,3: ");
	scanf("%f, %f",&b1,&b2);
	printf("Enter point 2 e.g. 6,3: ");
	scanf("%f, %f",&c1,&c2);
	if(a1/a2==b1/b2||b1/b2==c1/c2){
		printf("Your entered three line lies on a straight line");
	}else{
		printf("Your entered three line not lies on a straight line");
	}
	return 0;
}
