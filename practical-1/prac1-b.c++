#include<iostream>
using namespace std;
void printfarray(int arr[],int size){
    cout<<"printing of the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ,";
    }
    cout<<"\n";
}

void Acceptarray(int arr[],int size){
    cout<<"Accepting  the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n";
}

void mergearray(int arr1[],int arr2[],int arr3[],int size1,int size2,int size3){
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
        cout<<i<<endl;
    }
    for (int i = 0; i < size2; i++)
    {
        arr3[i+size1] = arr2[i];
    }    
}

void sortarray(int* arr,int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])// 10 < 20
            {
                arr[i] = arr[i] + arr[j];//10 + 20 = 30
                arr[j] = arr[i] - arr[j];// 30 - 20 = 10;
                arr[i] = arr[i] - arr[j];// 30 - 10 = 20
            }
        }
    }
}

int main(){
    int arr1[5],arr2[5],arr3[10];
    int size1 = sizeof(arr1)/4 ,size2 = sizeof(arr2)/4 , size3 = sizeof(arr3)/4;
    Acceptarray(arr1,size1); // accept the value for the array 
    // printfarray(arr1,size1);
    Acceptarray(arr2,size2);// accept the value for array
    // printfarray(arr2,size2);
    mergearray(arr1,arr2,arr3,size1,size2,size3); // merge the array
    sortarray(arr3,size3);// sorting the array 
    printfarray(arr3,size3); // printing the array 
}