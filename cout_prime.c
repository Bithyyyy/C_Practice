#include <stdio.h>

int main() {
    int p;
    scanf("%d",&p);
    while(p--)
    {
        int n,m;
    scanf("%d %d",&n,&m);
    int countP=0;
    for(int i=n;i<=m;i++)
    {
       
        int isPrime=1;
         if (i <= 1) isPrime = 0;  
        for(int j=2;j*j<=i;j++)
        {
           

            if(i %j ==0)
            {
                isPrime=0;
            }
        }
        if(isPrime==1)
        {
            countP++;
        }
    }
    printf("%d\n",countP);
    }
    return 0;

}