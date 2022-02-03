#include <stdio.h>

int main()
{
    double p,q;
    char ch;
    printf("Enter two double integers");
    scanf("%lf %lf",&p,&q);
    printf("\n\nEnter the Character: ");
    scanf("%c", &ch);
    if(ch==a)
    {
      printf("sum is %lf",p+q);  
    }
    else if(ch==s)
    {
         printf("diff is %lf",p-q);
    }
    else
    {
        printf(" no action");
    }

    }

