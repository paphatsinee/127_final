#include<stdio.h>
int main()
{
    int n,m,r=0,i,a;
    scanf("%d %d",&n,&m);

    for(i=0;r!=m;i++)
    {
        a=n;
        while(a>=10)
        {
            a=a/10;r=a%10;

        }
        if(r!=m)
        {
            n++;
        }
        else
            break;

    }
    printf("%d",r);
return 0;
}
