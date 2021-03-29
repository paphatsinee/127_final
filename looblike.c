#include<stdio.h>
int main()
{
    int N,i,count,tem=0,r[2];
    scanf("%d",&N);
    int n[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<N;i++)
    {
        count=0;
        for(int j=0;j<N;j++)
        {
            if(n[i]==n[j])
            {
                count++;
            }
        }
        if(count>=tem)
        {
            if(count==tem)
            {
                r[1]=n[i];
            }
            if(count>tem)
            {
                r[0]=n[i];
                tem=count;
            }


        }
    }
    for(i=0;i<2;i++)
    {
        if(r[i-1]!=r[i])
            printf("%d ",r[i]);
    }


    return 0;
}
