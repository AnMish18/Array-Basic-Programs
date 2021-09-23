//WAP to delete an element from array
//Anwesha Mishra C2_12



#include<stdio.h>
int main()
{

int a[100],n,i, key, pos;
    printf("\n Enter how many numbers needed to take in an array");
    scanf("%d",&n);
    printf("\n Enter the %d elements",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position where the element is to be deleted");
    scanf("%d",&pos);
    printf("\n The original array " );
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    key=a[pos];//element to be deleted is at position pos

    for(i=pos;i<n-1;i++)
    {
         a[i]=a[i+1];

    }
    n=n-1;//reduce the size of array by 1

    printf("\n The improvised array :\n");
    for(i=0;i<n;i++)//display the new array
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
