#include<stdio.h>
int main()
{
    int T,t,i,a,b;
    scanf("%d",&t);
    for(T=0;T<t;T++)
    {
        scanf("%d%d",&a,&b);

    int s=0;
    for(i=a;i<=b;i++)
    {
        if(i%2==1)
            s=s+i;

    }
       printf("Case %d: %d\n",T+1,s);
    }

    return 0;
}
