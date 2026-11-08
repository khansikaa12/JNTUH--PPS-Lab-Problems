// Write a C program to find the minimum, maximum and average in an array of integers. 
#include<stdio.h>
int main()
{
    int i,min,max,sum=0,n;
    float avg;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of an Array :\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
    min=array[0];
    max=array[0]; //Shouldn't initialise this before itself as it takes garbage     values without the user printing elements.
    for(i=1;i<n;i++)
        {
            if(array[i]>max)
            {
                max = array[i];
            }
            if(array[i]<min)
            {
                min = array[i];
            }
            sum = array[i]+sum;
        }
    sum = sum + array[0];
    avg = (float)sum/n;
    printf("The max in the Array of intergers is : %d\n",max);
    printf("The min in the Array of intergers is : %d\n",min);
    printf("The Average of the Array is : %f", avg);
    return 0;
}
