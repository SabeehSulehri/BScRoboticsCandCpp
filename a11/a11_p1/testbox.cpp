#include <iostream>
#include <cmath>
#include "Box.h"

using namespace std;

int main()
{
    Box *arr;
    int n;
    double h,w,d,v;

    cout << "How many boxes do u want?" << endl;
    cin >> n;

    arr = new Box[2*n];

    for(int idx=0 ; idx < n; idx++)
    {
        cout << "Input height of the box " << idx+1 << endl;
        cin >> h;
        arr[idx].setHeight(h);

        cout << "Input width of the box " << idx+1 << endl;
        cin >> w;
        arr[idx].setWidth(w);

        cout << "Input depth of the box " << idx+1 << endl;
        cin >> d;
        arr[idx].setDepth(d);
    }
    for(int idx=0 ; idx < n; idx++)
    {
        arr[idx+n] = Box(arr[idx]);
    }

        for(int idx=0 ; idx < 2*n; idx++)
    {
        v=arr[idx].volume();
        cout << "The volume of box " << idx+1 << ": " << v << endl;
    }

    delete []arr;

    return 0;
}