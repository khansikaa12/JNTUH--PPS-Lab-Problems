// Write a C program to generate the first n terms of the Fibonacci sequence. 
#include<stdio.h>
int main()
{
    int a=0,b=1,num,i,next;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The Fibonacci Sequence till the given number is : ");
    for(i=0;i<num;i++)
        {
            printf("\t");
            printf("%d",a);
            next = a + b;
            a = b;
            b = next;
        }
   return 0;
}
