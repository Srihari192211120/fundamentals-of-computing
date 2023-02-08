#include <stdio.h>
int main() 
{
    int num, sum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    sum = num;
    while (sum != 0) 
	{
	   remainder = sum % 10;
       result += remainder * remainder * remainder;
       sum /= 10;
}

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
