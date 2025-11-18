#include<stdio.h>
#include<conio.h>
int a0, a1, a2, a3;
float f(float x) {
	return(a3*x*x*x+a2*x*x+a1*x+a0);
}
int main()
{
	float xl, xm, xu, fxl, fxm, fxu, E, Era;
	printf("Enter coefficient a3,a2,a0, and a1\n");
	scanf("%d%d%d%d", &a3, &a2, &a1,  &a0);
	printf("Enter initial bracket and E\n");
	
	scanf("%f%f%f", &xl, &xu, &E);
	fxl= f(xl);
	fxu= f(xu);
	if (fxl*fxu>0){
		printf("The initial bracket does not enclose a root.\n");
		return 1;
	}
	while(1){
		xm= (xl+xu)/2;
		fxm=f(xm);
		if(fxl*fxm ==0){
			printf("Root= %f\n", xm);
			break;
		} else if(fxl*fxm<0){
			xu=xm;
		} else {
			xl=xm;
			fxl=fxm;
		}
		Era=(xu-xl)/xu;
		if (Era<E){
			printf("Root=%f\n", xm);
			break;
		}
	}
	getch();
}
