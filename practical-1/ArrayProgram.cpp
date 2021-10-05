#include<iostream>
using namespace std;
int main(){
    int a[] = {50,20,10,40,30};
    int search , size = sizeof(a)/4;
    cout<<"value in the array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<", ";
    }

    // search in the array 
    cout<<"\nenter the value"<<endl;
    cin>>search;   // accepting value for search 

    for (int i = 0; i < 5; i++)
    {
        if (search == a[i])
        {
            cout<<"yes the value "<<search<<" in the array"<<endl;
        }
    }

    // sorting this array 
        cout<<"before sorting "<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<a[i]<<", ";
        }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i] < a[j])// 10 < 20
            {
                a[i] = a[i] + a[j];//10 + 20 = 30
                a[j] = a[i] - a[j];// 30 - 20 = 10;
                a[i] = a[i] - a[j];// 30 - 10 = 20
            }
        }
    }
    // printing the sorted array 
    cout<<"\nafter sort "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<", ";
    }

    // reverse this array 
    cout<<"\nbefore reverse "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<", ";
    }

    for (int  i = 0; i < size; i++)
    {
        if (size/2 < i)
        {
            a[i] = a[i] + a[size-i-1];
            a[size-i-1] = a[i] - a[size-i-1];
            a[i] = a[i] - a[size-i-1];
        }
    }

    // printing the reverse array 
    cout<<"\nafter reverse "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<", ";
    }
};