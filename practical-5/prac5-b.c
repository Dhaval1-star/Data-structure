# include<stdio.h>

void printarray(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

// void insertionsort(int a[],int n){
//     int temp ;
//     for (int i = 1; i < n; i++)
//     {
//         for (int  j = i; j > 0; j--)
//         {
//             if (a[j] < a[j-1])
//             {
//               temp = a[j];
//               a[j] = a[j-1];
//               a[j-1] = temp;  
//             }
//             printarray(a,n);
//         }
//     }
// }

void insertionsort(int a[],int n){
    int key , j;
    for (int i = 1; i < n; i++)
    {
        key = a[i]; // current element value 3
        j = i-1; // 3
        while (j>=0 && a[j] > key)// run 6 > 3
        {
            a[j+1] = a[j];// a[3] = 6
            j--;// 2
        }
        a[j+1] = key; // this is for when j value become -1 for that we done a[j+1] this is = to a[0]
    }
}
void main(){
    int a[] = {4,5,6,7,3,2};
    int n =6;
    printarray(a,n);
    insertionsort(a,n);
    printarray(a,n);
}