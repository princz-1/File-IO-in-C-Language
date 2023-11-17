/* Read & Write a Char 
fgetc(fptr)
  fputc('A',fptr)
  */
  #include <stdio.h>

int main(void) {
FILE*fptr;
  //Read Mode
  fptr =fopen("test4.txt","r");
  printf("%c\n",fgetc(fptr));
  printf("%c\n",fgetc(fptr));
  printf("%c\n",fgetc(fptr));
  printf("%c\n",fgetc(fptr));
  printf("%c\n",fgetc(fptr));
 fclose(fptr);
  
  //Write Mode
  fptr = fopen("test4.txt","w");
  fputc('M',fptr);
  fputc('A',fptr);
  fputc('N',fptr);
  fputc('G',fptr);
  fputc('O',fptr);
