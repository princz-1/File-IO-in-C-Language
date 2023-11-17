//EOF (End Of File)
//fgetc returns EOF to show that the file has ended
#include <stdio.h>

int main(void) {
  FILE*fptr;
  fptr = fopen("test5.txt","r");
char ch;
  ch =fgetc(fptr);
  while(ch != EOF){
    printf("%c",ch);
    ch =fgetc(fptr);
  }
printf("\n");
  

  fclose(fptr);
  return 0;
}
