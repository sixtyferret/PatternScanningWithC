#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scan.h"

int main(int argc, char *argv[])
{
	//argc stores number of arguments
	//char *argv[] is an array of pointers for the arguments entered in command line(string)

	char kw[50];char st1[50];char st2[50];
	/*st1 and st2 are two key words extracted from kw after removing the condition like OR/AND
	  If no condition then kw stores the key words*/
	printf("peepeepoopoo");
	
	strcpy(kw, argv[1]);
	//kw stores a copy of the key words to be searched in the files

	lower_string(kw);
	int flag=check(kw,st1,st2);
	//flag tells if the kw has OR/AND/None of the above

	search(argc,flag,kw,st1,st2,&argv[0]);
	//&argv[0] passes address of first element of array
	return 0;
}
