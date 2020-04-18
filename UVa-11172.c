#include<stdio.h>
int main()
{
    int t,a[20],b[20],i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
      for(i=0;i<t;i++)
      {
          if(a[i]<b[i])
            printf("<\n");
          else if(a[i]>b[i])
            printf(">\n");
          else if(a[i]==b[i])
            printf("=\n");
      }
      return 0;
}

