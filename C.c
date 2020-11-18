#include<stdio.h>
int main()
{
    int x,i,y[20000],z[20000];
    double a;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&y[i]);
        scanf("%d",&z[i]);
    }
    for(i=1;i<=x;i++)
    {
        if(y[i]!=0 && z[i]!=0)
        {
            a=((double)y[i])/z[i];
            printf("%.1lf\n",a);
        }
        else if(y[i]!=0 && z[i]==0)
        {
            printf("divisao impossivel\n");
        }
        else if(y[i]==0 && z[i]!=0)
        {
            printf("0.0\n");
        }
    }
    return 0;
}
