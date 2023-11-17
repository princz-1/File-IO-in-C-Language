//Writing  to a file.

#include <stdio.h>

int main(void) {
FILE*fptr;
  fptr =fopen("test3.txt","w");

  fprintf(fptr,"%c",'M');
  fprintf(fptr,"%c",'A');
  fprintf(fptr,"%c",'N');
  fprintf(fptr,"%c",'G');
  fprintf(fptr,"%c",'O');
fclose(fptr);
  fptr =fopen("test3.txt","a");

  fprintf(fptr,"%c",' ');
  fprintf(fptr,"%c",'A');
  fprintf(fptr,"%c",'P');
  fprintf(fptr,"%c",'P');
  fprintf(fptr,"%c",'L');
  fprintf(fptr,"%c",'E');
  fclose(fptr);
  return 0;
}
