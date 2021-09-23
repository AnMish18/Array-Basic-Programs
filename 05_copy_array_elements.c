//WAP to copy the elememts of one array to another by adding 1 to it
//Anwesha Mishra C2_12

#include<stdio.h>
int main()

{

    int i,j,n;
    printf("Input the value of n");
    scanf("%d", &n);
    int num[n];
    int copy[n];

    printf("Enter the numbers \n");

    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);

    }
    for(j=0;j<n;j++)
    {
        copy[j]=num[j]+1;
        printf("copy[%d]= %d \n",j,copy[j]);

    }
    return 0;
}
