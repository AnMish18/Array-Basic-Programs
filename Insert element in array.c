 //WAP to insert element in array
//Anwesha Mishra C2_12

#include<stdio.h>
int main()

{
    int a[100],n,i, key, pos;
    printf("\n numbers needed to take in an array");
    scanf("%d",&n);
    printf("\n Enter the %d elements",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n The elements in the array are " );
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n Enter the element to insert");
    scanf("%d", &key);
    printf("Enter the position where the element is to be inserted");
    scanf("%d",& pos);

    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];

    }
    n=n+1;
    a[pos]=key;
    printf("The improvised array is");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
