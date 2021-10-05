# include<stdio.h>

void printarray(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void selectionsort(int *a,int n){
    int indexofmin;
    for (int i = 0; i < n-1; i++)// it will run till 4
    {
        indexofmin = i;
        for (int j = i+1; j < n; j++)// it will run till j is less than 5
        {       
            if (a[j] < a[indexofmin])
            {
                indexofmin = j;
            }
        }
        int temp = a[i];
        a[i] = a[indexofmin];
        a[indexofmin] = temp;
    }
}

void main(){
    int a[] = {3,5,2,13,12};
    int n =5;
    printarray(a,n);
    selectionsort(a,n);
    printarray(a,n);
}