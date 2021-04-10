#include <stdio.h>


int checking(long long numb);

int main()
{
    long long num;
    scanf("%lld",&num);
    int result=checking(num);
    printf("%d",result);
    return 0;
}

int checking(long long numb)
{
    int count=0;
    
	while (numb!=0)
    
	{
        if (numb%10==1)
        
			count++;
        
		numb/=10;
    }
    return count;
}