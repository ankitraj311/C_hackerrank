#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k)
{
  int old_answer_or=0,new_answer_or=0,old_answer_xor=0,new_answer_xor=0,old_answer_and=0,new_answer_and=0,i,j;
  for(i=1;i<n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
      if( (new_answer_and = (i & j)) < k)
      {
        if( new_answer_and > old_answer_and )
        {
          old_answer_and = new_answer_and;
        }
      }
      if( (new_answer_or = (i | j)) < k)
      {
        if( new_answer_or > old_answer_or )
        {
          old_answer_or = new_answer_or;
        }
      }
      if( (new_answer_xor = (i ^ j)) < k)
      {
        if( new_answer_xor > old_answer_xor )
        {
          old_answer_xor = new_answer_xor;
        }
      }
    }
  }
  printf("%d\n",old_answer_and);
  printf("%d\n",old_answer_or);
  printf("%d",old_answer_xor);

}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
