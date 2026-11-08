//Write a C program to find the sum of individual digits of a positive integer and test given number is palindrome
#include<stdio.h>
int main()
{
    int num,sum=0,r,originalnum,reversednum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    originalnum = num;
    while(num>=1)
        {
            r = num%10;
            num = num/10;
            reversednum = (reversednum * 10) + r;
            sum = sum + r;
        }
    printf("The sum is %d\n",sum);
    if(reversednum==originalnum)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
    return 0;
}
