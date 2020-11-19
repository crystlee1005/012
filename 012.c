#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ( int argc, char *argv[]) {
	
  FILE *fp;
  char str[100];
  char path[100];
  char lookup[100];
  
  printf(" input file path: ");
  scanf("%s", path);
  printf("input search word: ");
  scanf("%s", lookup);
  
  fp = fopen(path, "r");
  if ( fp == NULL)
  { printf("invalid path! (%s)\n", path);
  	return -1;
  }

  while ( fgets(str, 100, fp) != NULL)
  { if (strncmp(str, lookup, strlen(lookup)) == 0)
  {
  	printf("Search succeed!\n");
  	fclose(fp);
  	return 0;
  }
  }
  printf("Search failed!\n");
  fclose(fp);
  return 0;
}

	

