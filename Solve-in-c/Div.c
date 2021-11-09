#include <stdio.h>

double division(double num1, double num2){
	if(num2 == 0){
		printf("Nothing is divisable by Zero\n");
	}
	else{
		double div = num1/num2;
		printf("Division is %0.2lf\n", div);;
	}
}

int main(){
	double a1,b1, result;
	printf("Enter two integers\n");
	scanf("%lf", &a1);
	scanf("%lf", &b1);
	//result = division(a1,b1);
	//printf("Division is %0.2lf\n", result);
	return 0;
}


