// Make a program to read 5 integers from a file.

#include <stdio.h>

int main(void) {
FILE*fptr;
  fptr = fopen("test6.txt","r");

  int num;
  fscanf(fptr,"%d", &num);
  printf("number :%d\n",num);

  fscanf(fptr,"%d", &num);
  printf("number :%d\n",num);

  fscanf(fptr,"%d", &num);
  printf("number :%d\n",num);

  fscanf(fptr,"%d", &num);
  printf("number :%d\n",num);

  fscanf(fptr,"%d", &num);
  printf("number :%d\n",num);
  return 0;
}
