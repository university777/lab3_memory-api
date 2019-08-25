#include <stdlib.h>

int main(){
  int *data=(int *)malloc(100*sizeof(int));
  int *ptr = data+50;
  free(ptr);
  free(data);
  return 0;
}