#include<iostream>
using namespace std;
int main(){

    int arr1[3][3] = {{1,2,3},{3,4,5},{5,6,6}};
    int arr2[3][3] = {{7,8},{9,10},{11,12}};
    int arr3[3][3];
    int size = (sizeof(arr1)/4)/4;

    // addition of matrix 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }   
    }
    cout<<"addition of  matrix"<<endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<arr3[i][j]<<" ,";
        }   
        cout<<"\n";
    }

    // multiplication  of matrix 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }   
    }
    cout<<"multiplication of matrix"<<endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<arr3[i][j]<<" ,";
        }   
        cout<<"\n";
    }

    // transpoce of an array 
    // cout<<"before transpoce"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         cout<<arr1[i][j]<<" ,";
    //     }   
    //     cout<<"\n";
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (i>=1 && i != size)
    //         {
    //             int temp = arr1[i][j];
    //             arr1[i][j] = arr1[j][i];
    //             arr1[j][i] = temp;
    //         }
    //     }   
    // }
    // cout<<"after transpoce"<<endl;
    //  for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         cout<<arr1[i][j]<<" ,";
    //     }   
    //     cout<<"\n";
    // }
}