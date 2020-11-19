#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ( int argc, char *argv[]) {
	
  FILE *fp;
  char str[100];
  int i;
  
  fp = fopen("sample.txt", "w");
  if ( fp == NULL)
  {
  	return -1;
  }
  
  for(i=0; i<3; i++)
  {
  	printf("Input a word: ");
  	scanf("%s", str);
  	fprintf(fp, "%s\n", str);
  }
  fclose(fp);
  
  return 0;
}
	

