#include<stdio.h>
int binsearch(int [],int,int,int);
main()
{
    int arr[30],n,i;
    int key,pos;
    printf("The size of the array is:-");
    scanf("%d",&n);
    printf("Enter the values");
    for(i=0;i<n;i++)
    {
        //printf("Enter value");
        scanf("%d",&arr[i]);
    }
    printf("The array elements are\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\tThe value to search is\n");
    scanf("%d",&key);
    pos = binsearch(arr,key,0,n-1);   //0 is lower index and n-1 is the highest index
                                    //Value not present return -1 index if value is present
    if(pos==-1)
    {
        printf("Element is not present");
    }
    else
    {
        printf("The value %d is present at %d",key,pos);
    }
}
int binsearch(int arr[],int key,int low, int high)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==arr[mid])
            return mid;   //item is got at middle hence returns the index of middle
        else if(key>arr[mid])
        {
            low=mid+1; //item present at right side pointed by lower
        }
        else
        {
           high=mid-1; //present at left and high brings mid to its previous position
        }
    }
    return -1; //lower > or equal to higher and -1 because index is positive numbers


}
