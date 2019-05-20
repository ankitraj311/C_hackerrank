#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int j,i,n,sum=0;
  scanf("%d", &n);
  int *arr=(int*)malloc(n*sizeof(int)); //using malloc for dynamic memory allocation.
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
  }
  free(arr);
  printf("%d",sum);
 return 0;
}
