# include<stdio.h>

void printarray(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}

void bubblesort(int *a , int n){
    int temp;
    int issort = 0; // thsis value is 0 means it is not sorter we have to sort
    for (int i = 0; i < n-1; i++){
        printf("working on pass : %d\n",a[i]);
        issort = 1;// it means it is sorted 
        for (int  j = 0; j < n-1-i; j++){
            if (a[j] > a[j+1]){
                temp =  a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                issort = 0;// it means it is not  sorted 
            }
        }
        if (issort == 1){
            return;
        }
    }
}
void main(){
    int a[] = {12,54,65,7,23,9};
    // int a[] = {1,2,3,4,5,6};
    int n =6;
    printarray(a,n);
    printf("\n");
    bubblesort(a,n);
    printarray(a,n);
}