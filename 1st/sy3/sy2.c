#include<stdio.h>
#include<math.h>

typedef int bool;
#define true 1
#define false 0

struct Point
{
    double x;
    double y;
};

bool isLine(const struct Point *p1,const struct Point *p2,const struct Point *p3)
{
    if((p1->y-p2->y)/(p1->x-p2->x)==(p1->y-p3->y)/(p1->x-p3->x)) return true;
    else if(p1->x==p2->x&&p1->y==p2->y) return true;
    else if(p1->x==p3->x&&p1->y==p3->y) return true;
    else if(p3->x==p2->x&&p3->y==p2->y) return true;
    else return false;
}

double howLong(const struct Point *p1,const struct Point *p2)
{
    return sqrt(pow(p1->x-p2->x,2)+pow(p1->y-p2->y,2));
}

double cosA(const struct Point *p1,const struct Point *p2,const struct Point *p3)
{
    return (pow(howLong(p2,p3),2)+pow(howLong(p1,p3),2)-pow(howLong(p1,p2),2))/(2*howLong(p1,p3)*howLong(p2,p3));
}

double sinA(const struct Point *p1,const struct Point *p2,const struct Point *p3)
{
    return sqrt(1-pow(cosA(p1,p2,p3),2));
}

double howLongC(const struct Point *p1,const struct Point *p2,const struct Point *p3)
{
    return howLong(p1,p2)+howLong(p2,p3)+howLong(p1,p3);
}

double area(const struct Point *p1,const struct Point *p2,const struct Point *p3)
{
    return howLong(p2,p3)*howLong(p1,p3)*sinA(p1,p2,p3)*0.5;
}

int main()
{
    struct Point point1,point2,point3;
    scanf("%lf,%lf",&point1.x,&point1.y);
    scanf("%lf,%lf",&point2.x,&point2.y);
    scanf("%lf,%lf",&point3.x,&point3.y);

    if((isLine(&point1,&point2,&point3)))
    {
        printf("Impossible");
        return 0;
    }

    printf("primeter=%.2lf,area=%.2lf",howLongC(&point1,&point2,&point3),area(&point1,&point2,&point3));

    return 0;
}