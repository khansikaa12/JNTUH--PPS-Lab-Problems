#include<stdio.h>
int main()
{
    int num,decimal,r,place=1,binary=0;
    printf("Enter a Decimal number :");
    scanf("%d\n",&num);
    while(num>0)
        {
            r = num%2;
            num = num/2;
            place = place*10;
            binary = binary+(r*place);
        }
    printf("The Binary equivalent of the decimal number is : %d",binary);
    return 0;
}
