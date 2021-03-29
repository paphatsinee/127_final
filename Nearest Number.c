#include<stdio.h>
int main()
{
    int n,m;
    char a[10];
    scanf("%s %c",a,&n);
    m=a;
    for(int i=0;i<10;i++)
    {
        while(a[i]!=n)
        {
            a[i]+=1;
            m++;
        }
    }
    printf("%s",a);

}
