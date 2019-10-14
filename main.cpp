#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10],c[20],u[20],z[40];
    int i,j,flag=0,n,m,q=0,d=0,w,e;
    printf("Enter size of Universal set: ");
    scanf("%d",&w);
    printf("Enter Universal set \n");
    for(i=0;i<w;i++)
    {
        scanf("%d",&u[i]);
    }
    e=w;
    for(i=0;i<w;i++)
    {
        c[i]=u[i];
    }
    printf("Enter size of set A: ");
    scanf("%d",&n);
    printf("Enter set A \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of set B: ");
    scanf("%d",&m);
    printf("Enter set B \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    for( ;i<n; )
    {
        d=0;
        flag=0;
        for(j=0;j<w;j++)
        {
            if(a[i]==u[j])
            {
                flag=1;
                d=j;
                break;
            }
        }
        if(flag==1)
        {
            for(q=i;q<n-1;q++)
            {
                a[q]=a[q+1];
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
        flag=0;
        for(j=0;j<e;j++)
        {
            if(b[i]==c[j])
            {
                flag=1;
                d=j;
                break;
            }
        }
        if(flag==1)
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
    printf("press 1 to find A union B compliment \npress 2 for A intersection B compliment \n");
    scanf("%d",&q);
    if(q==1)
    {
        printf("A union B compliment: ");
      for(i=0;i<w;i++)
      {
        flag=0;
        for(j=0;j<i;j++)
        {
            if(u[j]==u[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(j=0;j<e;j++)
                {
                if(c[j]==u[i])
                    {
                        printf("%d ",u[i]);
                        break;
                    }
                }
            }
        }
    }
    else if(q==2)
    {
       printf("A intersection B compliment: ");
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
            flag=0;
            for(j=0;j<i;j++)
            {
                if(z[j]==z[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
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
