/*
CH-230-A
a8_p6.c
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2, *f3;
    char file1[50], file2[50];
    double x,y,sum,difference,product,division;

    printf("Enter name of file1:\n");
    fgets(file1, sizeof(file1),stdin);
    file1[strlen(file1)-1] = '\0';

    f1 = fopen("file1","r");
    if(f1==NULL)
    {
        printf("Error opening file 1.\n");
        exit(0);
    }

    printf("Enter name of file2:\n");
    fgets(file2, sizeof(file2),stdin);
    file2[strlen(file2)-1] = '\0';

    f2 = fopen("file2","r");
    if(f2==NULL)
    {
        printf("Error opening file 2.\n");
        exit(0);
    }

    f3 = fopen("results.txt","w");
    if(f3==NULL)
    {
        printf("Error opening file 3.\n");
        exit(0);
    }

    fscanf("f1" , "%lf" , &x);
    fscanf("f2" , "%lf" , &y);
    
    sum = x + y;
	difference = x - y;
    product = x * y;
	division = x / y;

    fprintf("f3","%lf\n",sum);
    fprintf("f3","%lf\n",difference);
    fprintf("f3","%lf\n",product);
    fprintf("f3","%lf\n",division);

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}