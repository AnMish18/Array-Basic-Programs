//Wap to input n numbers and print the larger sun out of even and odd sun
//Anwesha Mishra C2_12

#include<stdio.h>

int main()
{
 int n, i, a[10];
 int Even_Sum=0;
    int Odd_Sum = 0;

 printf("\n Enter the numbers: ");
 scanf("%d", &n);

 printf("\n Enter the Array Elements\n");
 for(i = 0; i < n; i++)
 {
      scanf("%d", &a[i]);
 }

 for(i = 0; i < n; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Even_Sum = Even_Sum + a[i];
   }
   else
   {
 	Odd_Sum = Odd_Sum + a[i];
   }
 }

 printf("\n The Sum of Even Numbers  = %d ", Even_Sum);
 printf("\n The Sum of Odd Numbers = %d ", Odd_Sum);

 if(Even_Sum> Odd_Sum)
 {
     printf("The larger sum is %d \n", Even_Sum);
 }
 else
 {
     printf("The larger sum is %d \n", Odd_Sum);
 }

 return 0;
}
