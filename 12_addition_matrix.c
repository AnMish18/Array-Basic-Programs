
#include<stdio.h>

void read_arr(int arr[50][50],int r,int c);
void add_arr(int a1[50][50],int a2[50][50],int add[50][50],int r,int c);
void show_arr(int add[50][50],int r,int c);
void main()
{
    int a1[50][50],a2[50][50],add[50][50],r,c;
    printf("enter the number of rows and coloumn : ");
    scanf("%d %d",&r,&c);
    read_arr(a1,r,c);
    read_arr(a2,r,c);
    add_arr(a1,a2,add,r,c);
    show_arr(add,r,c);
}

void read_arr(int arr[50][50],int r,int c)
{
    int i1,i2;
    printf("enter the elements : \n");
    for(i1=0;i1<r;i1++)
    {
        for(i2=0;i2<c  ;i2++)
        {
            scanf("%d",&arr[i1][i2]);
        }
    }
}

void add_arr(int a1[50][50],int a2[50][50],int add[50][50],int r,int c)
{
    int i1,i2;
    for(i1=0;i1<r;i1++)
    {
        for(i2=0;i2<c;i2++)
        {
            add[i1][i2]=a1[i1][i2]+a2[i1][i2];
        }
    }
}

void show_arr(int add[50][50],int r,int c)
{
    int i1,i2;
    printf("sum : \n");
    for(i1=0;i1<r;i1++)
    {
        for(i2=0;i2<c;i2++)
        {
            printf("%d\t",add[i1][i2]);
        }
        printf("\n");
    }
}
