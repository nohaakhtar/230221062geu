#include<stdio.h>
int main()
{
    int a[30],i,n,min;
    printf(" Enter Number of Elements in Array :");
    scanf("%d",&n);
    printf(" \n Enter the Elements: ");
    for(i=0 ; i < n ; i++)
        scanf("%d",&a[i]);
        min = a[0];
    for(i = 0 ; i < n ; i++)
    {
        if ( a[i] < min )
            min = a[i];
    }
      printf(" Smallest Element in the Array is : %d",min);
     return 0;
}
