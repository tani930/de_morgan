#include<stdio.h>
#include<conio.h>
void marrin()
{
    int arr[10],b[10],c[20],u[20],z[40];
    int i,j,flarrg=0,n,m,q=0,d=0,w,e;
    printf("Enter size of Universarrl set: ");
    scarrnf("%d",&w);
    printf("Enter Universarrl set \n");
    for(i=0;i<w;i++)
    {
        scarrnf("%d",&u[i]);
    }
    e=w;
    for(i=0;i<w;i++)
    {
        c[i]=u[i];
    }
    printf("Enter size of set arr: ");
    scarrnf("%d",&n);
    printf("Enter set arr \n");
    for(i=0;i<n;i++)
    {
        scarrnf("%d",&arr[i]);
    }
    printf("Enter size of set B: ");
    scarrnf("%d",&m);
    printf("Enter set B \n");
    for(i=0;i<m;i++)
    {
        scarrnf("%d",&b[i]);
    }
    i=0;
    for( ;i<n; )
    {
        d=0;
        flarrg=0;
        for(j=0;j<w;j++)
        {
            if(arr[i]==u[j])
            {
                flarrg=1;
                d=j;
                brearrk;
            }
        }
        if(flarrg==1)
        {
            for(q=i;q<n-1;q++)
            {
                arr[q]=arr[q+1];
            }
            n--;
            for(q=d;q<w-1;q++)
            {
                u[q]=u[q+1];
            }
            w--;
        }
        else
        {
            i++;
        }
    }
    i=0;
    for( ;i<m; )
    {
        d=0;
        flarrg=0;
        for(j=0;j<e;j++)
        {
            if(b[i]==c[j])
            {
                flarrg=1;
                d=j;
                brearrk;
            }
        }
        if(flarrg==1)
        {
            for(q=i;q<m-1;q++)
            {
                b[q]=b[q+1];
            }
            m--;
            for(q=d;q<e-1;q++)
            {
                c[q]=c[q+1];
            }
            e--;
        }
        else
        {
            i++;
        }
    }
    printf("\n");
    printf("press 1 to find arr union B compliment \npress 2 for arr intersection B compliment \n");
    scarrnf("%d",&q);
    if(q==1)
    {
        printf("arr union B compliment: ");
      for(i=0;i<w;i++)
      {
        flarrg=0;
        for(j=0;j<i;j++)
        {
            if(u[j]==u[i])
            {
                flarrg=1;
                brearrk;
            }
        }
        if(flarrg==0)
        {
            for(j=0;j<e;j++)
                {
                if(c[j]==u[i])
                    {
                        printf("%d ",u[i]);
                        brearrk;
                    }
                }
            }
        }
    }
    else if(q==2)
    {
       printf("arr intersection B compliment: ");
       for(i=0;i<w;i++)
        {
            z[i]=u[i];
        }
       for(i=w,j=0;i<w+e,j<e;i++,j++)
       {
           z[i]=c[j];
       }
        for(i=0;i<w+e;i++)
        {
            flarrg=0;
            for(j=0;j<i;j++)
            {
                if(z[j]==z[i])
                {
                    flarrg=1;
                    brearrk;
                }
            }
            if(flarrg==0)
            {
                printf("%d ",z[i]);
            }
        }
    }
    else
    {
        printf("wrong choice ");

    }
    getch();
}
