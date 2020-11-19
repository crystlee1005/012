#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ( int argc, char *argv[]) {
	
  FILE *fp;
  char str[100];
 // char c;
  
  fp = fopen("sample.txt", "r");
  if ( fp == NULL)
  {
  	return -1;
  }
  
  //while ( (c=fgetc(fp)) != EOF)
  while ( fgets(str, 100, fp) != NULL)
  {
  	printf("%s", str);
  }
  fclose(fp);
  
  return 0;
}
	

