//Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
main()
{
    int i=10 ;
    while(i>=1)
    {
        printf("%d\n",i*2-1);
        i--;
    }
    return 0;
}
