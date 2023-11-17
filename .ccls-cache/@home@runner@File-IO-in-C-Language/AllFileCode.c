/* FILE - container in a storage device to store data
- RAM is volatile 
- Contents are lost when program terminates
- File are used to presist the data.

  *File Pointer 
-FILE is a (hidden)structure thats needs to be created for opening a file.

- A FILE *ptr that points to this structure & is used to access the file.

  FILE*ptr

  Opening a File
  FILE*fptr;
  fptr = fopen("filename",mode);

  Closing a File
  fclose(fptr);
  */

#include <stdio.h>

int main(void) {
FILE *fptr;
  fptr = fopen("test.txt","r");
  fclose(fptr);


  //Check if a file exists before reading from it.
fptr = fopen("NewFile.txt","w");
  if(fptr == NULL){
    printf("File doesn't exist");
  }else{
    fclose(fptr);
  }

  
  return 0;
}