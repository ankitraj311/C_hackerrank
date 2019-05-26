#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  char str[100];
  scanf("%[^\n]s", str);
  int count[10] = {0};
  int i = 0;
  while (str[i] != '\0') {
    if ((str[i] >= '0') && (str[i] <= '9')) {
      count[str[i] - '0']++; // we are subtracting  '0' to get the int index.
    }
    i++;
  }
  for (i = 0; i < 10; i++) {
    printf("%d ", count[i]);
  }
  return 0;
}
