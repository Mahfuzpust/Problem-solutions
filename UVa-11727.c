#include<stdio.h>
int main()
{
    int T,i,a,b,c;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if((a>b&&b>c||a<b&&b<c))
          printf("Case %d: %d\n",i+1, b);
        else if((b>a&&a>c||b<a&&a<c))
            printf("Case %d: %d\n",i+1,a);
        else if((c>a)&&(a>b||c<a)&&(a<b))
            printf("Case %d: %d",i+1, c);
    }
    return 0;

}
