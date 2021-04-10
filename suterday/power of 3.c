#include <stdio.h>

/*this program to check if number is a power of 3 or not */



int power (int num); 

int main()
{
    printf("Enter the number\n");

    int number;

    scanf("%d",&number);

    printf("%d",power (number));	//calling the function and print the value
 
}

int power (int num)
{
 if (num%3==0)	//in case of true
    {
    
	return 0 ;
    
	}

 else			//in case of false
    {

    return  1 ;

    }

}
