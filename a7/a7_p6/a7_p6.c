/*
CH-230-A
a7_p6.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
//done but wth

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person 
{
    char name[30];
    int age;
};

int compare_age(struct person A, struct person B) 
{
    if(A.age == B.age) 
    {
        if(strcmp(A.name, B.name) < 0)
        {   
            return 0;
        }
		else return 1;
    }
    else return (A.age > B.age);
}

int compare_name(struct person A, struct person B) 
{
    if(strcmp(A.name, B.name) == 0)
    {    
        return (A.age > B.age);
    }
	else
    {
		if(strcmp(A.name, B.name) < 0)
        {
            return 0;
        }
		else return 1;
	}
}

struct person (*function)(struct person, struct person);

void bubblesort(struct person *arr,int n,
                 int (*function)(struct person, struct person)) 
{
    int temp, swapped = 1;
    char char_temp[30];
    while(swapped) {
        swapped = 0;
        for (int idx=0; idx < n-1; idx++) {
            //if the first element is bigger than the second
            //they are swapped
            if(function(arr[idx], arr[idx+1])) {
                strcpy(char_temp, arr[idx].name);
                strcpy(arr[idx].name, arr[idx+1].name);
                strcpy(arr[idx+1].name, char_temp);

                temp = arr[idx].age;
                arr[idx].age = arr[idx+1].age;
                arr[idx+1].age = temp;

                swapped = 1;
                //swap is 1 and while loop goes on
            }
        }
        n--;
        //n is decremented by one so that
        //the elements are set from end to beginning
        //by swapping
    }
}

//function to print elements of an array of struct person
void print(struct person *arr, int n) 
{
    for (int idx=0; idx < n; idx++) 
    {
        printf("{%s, %d}; ", arr[idx].name, arr[idx].age);
    }
    printf("\n");
}

int main()
{
    int n;
    struct person *array;

    scanf("%d",&n);

    array = (struct person *) malloc(sizeof(struct person)*n);
    if (array==NULL)
    {
        exit(1);
    }

    for (int idx=0; idx < n; idx++) 
    {
        scanf("%s", array[idx].name);
        scanf("%d", &array[idx].age);
    }

    bubblesort(array, n, compare_name);
    print(array, n);

    bubblesort(array, n, compare_age);
    print(array, n);

    free(array);

    return 0;
}