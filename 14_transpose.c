 #include <stdio.h>

int main()

  {
  int a[50][50],b[50][50],i,j,nr,nc;



       printf("\nInput the rows and columns of the matrix : ");
       scanf("%d%d",&nr,&nc);

       printf("elements in the first matrix :\n");
       for(i=0;i<nr;i++)
        {
            for(j=0;j<nc;j++)
            {
	           scanf("%d",&a[i][j]);
            }
        }

 	 printf("\n matrix is :\n");
  		for(i=0;i<nr;i++)
    		{

      		for(j=0;j<nc;j++)
                printf("%d\t",a[i][j]);

            printf("\n");
    		}

  for(i=0;i<nr;i++)
     {
      for(j=0;j<nc;j++)
            {
                   b[j][i]=a[i][j];
            }
      }

      printf("Transpose is : \n");
      for(i=0;i<nc;i++)
  {
      printf("\n");
      for(j=0;j<nr;j++)
      {
           printf("%d \t",b[i][j]);
      }
  }
      printf("\n");
}
