//WAP for linear search algorithm;
//Anwesha Mishra C2_12

#include <stdio.h>
int main()
{
  int arr[100], key, i, n;

  printf("Enter elements total in array\n");
  scanf("%d", &n);

  printf("Enter the  %d integer\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter a no. to find\n");
  scanf("%d", &key);

  for (i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      printf("%d is present at  %d.\n", key, i);
      break;
    }
  }
  if (i == n)
    printf("The element is not found");

  return 0;
}
