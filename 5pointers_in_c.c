#include <stdio.h>
#include<math.h>

void update(int *a,int *b) 
{
  int e, f;
  e = *a + *b;
  f = abs(*a - *b); //used to convert -ive value to +ive in case, it comes
  *a = e;
  *b = f;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
