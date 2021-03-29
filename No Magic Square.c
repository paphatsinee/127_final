#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,Ra=0,La=0,Rb=0,Lb=0,Rc=0,Lc=0;
    scanf("%d %d %d",&a,&b,&c);
    int A[a][a],rowA[a],colA[a], B[b][b],rowB[b],colB[b], C[c][c],rowC[c],colC[c];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
            scanf("%d",&A[i][j]);
    }
    for(i=0;i<a;i++)
    {
        rowA[i]=0;
        colA[i]=0;
        for(j=0;j<a;j++)
        {
            rowA[i]+=A[i][j];
            colA[i]+=A[j][i];
            if(i==j)
            {
                Ra+=A[i][j];
            }
        }
        for(j=a-1;j>0;j--)
        {
            La+=A[i][j]; break;
        }
    }

        for(i=0;i<b;i++)
    {
        rowB[i]=0;
        colB[i]=0;
        for(j=0;j<b;j++)
        {
            rowB[i]+=B[i][j];
            colB[i]+=B[j][i];
            if(i==j)
            {
                Rb+=B[i][j];
            }
        }
        for(j=b-1;j>0;j--)
        {
            Lb+=B[i][j]; break;
        }
    }

        for(i=0;i<c;i++)
    {
        rowC[i]=0;
        colC[i]=0;
        for(j=0;j<c;j++)
        {
            rowC[i]+=C[i][j];
            colC[i]+=C[j][i];
            if(i==j)
            {
                Rc+=C[i][j];
            }
        }
        for(j=c-1;j>0;j--)
        {
            Lc+=C[i][j]; break;
        }
    }


    for(i=0;i<a;i++)
    {
        if(Ra==rowA[i])
        {
            if(Ra==La)
            {
                if(Ra==colA[i])
                {
                    k=1;
                } else k=0;
            }else k=0;
        }
        else k=0;
    }
    if(k==1)
        printf("no");
    else
        printf("yes");

}
