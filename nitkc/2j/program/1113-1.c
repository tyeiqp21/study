#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int i;
  char *buff;

  if((buff = (char*)malloc(sizeof(char) * 1024)) == NULL){
    fprintf( stderr, "Failed to malloc.\n");
    exit(1);
  }

  srand((unsigned int)time(NULL));

  scanf("%d", &i);

  if(i <= 0){
    fprintf(stderr, "HA???Kireso-----\n");
  }

  while(0 < i){
    printf("%c", rand()%26 + 'a');
    --i;
  }
  printf("\n");

  free(buff);
  return(0);
}
