#include<stdio.h>
#include<math.h>

void change(double *x,double a)
{
    *x = *x / a;
}

int main()
{
    double a,b,d,e,f;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&d,&e,&f);

    if(a!=b||a==0||b==0)
    {
        printf("No circle");
        return 0;
    }

    change(&d,a);
    change(&e,a);
    change(&f,a);

    if((pow(d,2)+pow(e,2)-4*f)/4<=0)
    {
        printf("No circle");
        return 0;
    }

    printf("Center of a circle is(%.2f,%.2f)\n",-d/2,-e/2);
    printf("Radius of the circle is %.2f\n",sqrt((pow(d,2)+pow(e,2)-4*f)/4));

    return 0;
}