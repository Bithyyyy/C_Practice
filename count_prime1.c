#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n;i<m;i++)
    {
        int isPrime = 1;
        for(int j=2;j*j<= i;j++)
        {
            if(i % j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime) 
        printf("%d ",i);
    }
    return 0;
}