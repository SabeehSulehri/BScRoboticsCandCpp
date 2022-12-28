/*
CH-230-A
a8_p9.c
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char concat[500];
    int n;

    printf("Insert the number of files to concatenate:\n");
    scanf("%d",&n);
    getchar();

    FILE *outputfile;
    outputfile = fopen("output.txt","wb");
    if(outputfile == NULL)
    {
        printf("Cannot open output file.");
        exit(1);
    }

    for(int i=0; i<n; i++)
    {
        char name[20];
		FILE *fptr;

		printf("Insert name for file %d:\n", i+1);

		fgets(name, sizeof(name), stdin);
		name[strlen(name)-1] = '\0';

		fptr = fopen(name, "rb");
		if ( fptr == NULL ) 
        {
		    printf ("Can't open file!\n");
			exit(1);
		}

		char buffer[64];
		char backspace = '\n';

		//reading from file and writing in output.txt
		size_t size = fread(buffer, sizeof(char), 64, fptr);
		fwrite(buffer, sizeof(char), size, outputfile);
		fwrite(&backspace, sizeof(char), 1, outputfile);

		fclose(fptr);
	}

	fclose(outputfile);

	outputfile = fopen("output.txt", "rb");
	if ( outputfile == NULL ) 
    {
	    printf ("Can't open file!\n");
		exit(1);
	}

    printf("Concating the content of %d files ...\n", n);
	printf("The result is:\n");

	fread(concat, 1, 100, outputfile);

	concat[strlen(concat)-1] = '\0';
	printf("%s\n", concat);
	printf("The result was written into output.txt\n");

	fclose(outputfile);

    return 0;
}