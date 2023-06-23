//Write a program to print a table of 5.
#include<stdio.h>
main()
{
    int i=1,j=5;
    while(i<=10)
    {

        printf("%d*%d=%d\n",i,j,j*i);
        i++;
    }
    return 0;
}
