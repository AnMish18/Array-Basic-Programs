//WAP to input n numbers to an array and display the minimum and maximum
//Anwesha Mishra C2_12

#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the numbers n");
    scanf("%d", &n);
    printf("Enter the number");
    int arr[n],min,max;
    min=max=0;
    for(i=0;i<n;i++)
    {

        scanf("%d", &arr[i]);
    }
    min=max=arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
           min=arr[i];
        if(arr[i]>max)
           max=arr[i];
    }
    printf("\nThe minimum is %d",min);
    printf("\nThe maximum is %d",max);
}
