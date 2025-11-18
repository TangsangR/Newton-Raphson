#include <stdio.h>
#include <math.h>
#define G(x) (a3*x*x*x + a2*x*x + a0) / (-a1)
float a0, a1, a2, a3;
int main(){
    float x0, x1, E, Er;
    printf("Enter coefficient a3, a2, a1 and a0:\t");
    scanf("%f%f%f%f", &a3,&a2,&a1,&a0 );
        printf("Enter initial guess and E:\t");
    scanf("%f%f",&x0, &E );
    while (1){
        x1= G(x0);
        Er= (x1-x0)/x1;
        if(fabs(Er) < E){
            printf("Root= %f", x1);
            break;
        }
        x0 = x1;
    }
  return 0;
}
