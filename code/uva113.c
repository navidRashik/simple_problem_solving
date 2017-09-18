#include<stdio.h>
#include<math.h>
int main()
{
    double n,p;double s;

    scanf("%lf %lf",&n,&p);

    s=pow(p,1/n);
    printf("%.lf \n",s);

    return 0;
}
