// Write a program to write all the Odd numbers from 1 to n in a file.

#include <stdio.h>

int main(void) {
FILE*fptr;
  fptr = fopen("Odd.txt","w");

  int n;
  printf("Enter n :");
  scanf("%d",&n);

  for(int i=0; i<=n;i++){
    if(i % 2 != 0){
      fprintf(fptr,"%d\n",i);
    }
  }
  fclose(fptr);
  return 0;
}
