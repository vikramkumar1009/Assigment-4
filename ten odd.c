//Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
main()
{
    int i=1 ;
    while(i<=10)
    {
        printf("%d\n",i*2-1);
        i++;
    }
    return 0;
}
