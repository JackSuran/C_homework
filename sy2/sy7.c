#include<stdio.h>
#include<math.h>

int main()
{
    double x,y,A,B,C;

    scanf("%lf %lf",&x,&y);
    scanf("%lf %lf %lf",&A,&B,&C);

    printf("%lf",(fabs(A*x+B*y+C))/sqrt(pow(A,2)+pow(B,2)));

    return 0;
}