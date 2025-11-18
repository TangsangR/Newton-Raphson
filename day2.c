#include <stdio.h>
#include <math.h>

#define FUNCTION(x) (a3*x*x*x+a2*x*x+a1*x+a0)

int main() {
	float a0, a1, a2, a3;
	float x0, x1, x2, fx0, fx1, Er, tolerance;
	
	printf("Enter coefficients a3, a2, a1, and a0:\n");
	scanf("%f%f%f%f", &a3, &a2, &a1, &a0);
	
	printf("Enter two initial guesses and error tolerance:\n");
	scanf("%f%f%f", &x0, &x1, &tolerance);
	
	while(1) {
		fx0 = FUNCTION(x0);
		fx1 = FUNCTION(x1);
		
		if (fx1 == fx0) {
			printf("Division by zero error.\n");
			return -1;
		}
		
		x2 = x1-fx1* (x1-x0)/(fx1-fx0);
		
		Er = fabs(x2-x1)/ fabs(x2);
		
		if (Er < tolerance) {
			printf("Root = %f\n",x2);
			break;
		}
		x0=x1;
		x1=x2;
	}

}
