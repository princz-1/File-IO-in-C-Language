  // Reading from a file 
#include <stdio.h>

int main(void) {
  FILE*fptr;
  fptr = fopen("test2.txt","r");
  char ch;
  fscanf(fptr,"%c",&ch);
  printf("Character : %c\n",ch);

  fscanf(fptr,"%c",&ch);
  printf("Character : %c\n",ch);

  fscanf(fptr,"%c",&ch);
  printf("Character : %c\n",ch);

  fscanf(fptr,"%c",&ch);
  printf("Character : %c\n",ch);

  fscanf(fptr,"%c",&ch);
  printf("Character : %c\n",ch);

  int ch2;
  fscanf(fptr,"%d",&ch2);
  printf("Number : %d\n",ch2);

  fscanf(fptr,"%d",&ch2);
  printf("Number : %d\n",ch2);

  fscanf(fptr,"%d",&ch2);
  printf("Number : %d\n",ch2);
  fclose(fptr);
  return 0;
}
