// 19. Print numbers that have at least one repeated digit (without array)
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i <=n;i++)
    {
        int num = i;
        int original = num;
        int hasRepeat = 0;

        int temp1 = num;
        while(temp1 != 0)
        {
            int digit1 = temp1 %10;
            int temp2 = temp1 /10;
            while(temp2 != 0)
            {
                int digit2 = temp2 %10;
                if(digit1 == digit2)
                {
                    hasRepeat =1;
                    break;
                }
                temp2 /=10;
            }
            if(hasRepeat) break;
            temp1 /= 10; 
        }
        if(hasRepeat) {
            printf("%d ", original);
        }
    }
    return 0;
}
