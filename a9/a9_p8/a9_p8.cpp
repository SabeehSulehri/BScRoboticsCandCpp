/*
CH-230-A
a9_p8.cpp
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/
// done // memory allocation is given in this one

#include <iostream>
using namespace std;

void subtract_max(int array[], int n)
{
    int max=0;
    for(int idx=0;idx<n;idx++)
    {
        if(array[idx]>max)
        {
            max=array[idx];
        }
    }
    for(int idx=0;idx<n;idx++)
    {
        array[idx]=array[idx]-max;
    }
}

void deallocate(int array[])
{
    delete[] array;
}

int main()
{
    int n;
    cin >> n;

    int* array = new int[n];

    for(int idx=0; idx<n; idx++)
    {
		cin >> array[idx];
	}

    cout << "Before subtracting max:" << endl;
	for(int idx=0; idx<n; idx++)
    {
		cout<<array[idx]<<" ";
	}
	cout << endl;

	subtract_max(array, n);

	cout << "After subtracting max:" << endl;
	for(int idx=0; idx<n; idx++)
    {
		cout<<array[idx]<<" ";
	}
	cout << endl;

	deallocate(array);

    return 0;
}