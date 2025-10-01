#include <stdio.h>
int main()
{   
    int i,x, count=0;
    printf("Enter x: ");
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    { if(x%i==0)
    { 
        count++;
    }
    }
    if(count==2)
    { 
        printf("%d is a prime number\n",x);
    }
    else
    { 
        printf("%d is NOT a prime number\n",x);
    }
    return 0;
}
