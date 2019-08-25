#include <stdlib.h>
#include <stdio.h>

int main(){
  int *data=(int *)malloc(100*sizeof(int));
  free(data);
  printf("%d\n", data[26]);
  return 0;
}