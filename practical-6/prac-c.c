// C program to implement recursive Binary Search
#include <stdio.h>
#include<conio.h>
//#include<process.h>
#include<stdlib.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
// Note: Enter items in Sorted Order
int binarySearch(int arr[], int left, int right, int x)
{
if (right >= left)
{
int mid = left + (right - left)/2;
// If the element is present at the middle
// itself
if (arr[mid] == x)
return mid;
// If element is smaller than mid, then it can only be present in left subarray
if (arr[mid] > x)
return binarySearch(arr, left, mid-1, x);
// Else the element can only be present in right subarray
return binarySearch(arr, mid+1, right, x);
}
// We reach here when element is not present in array
return -1;
}

void main()
{
int i, n, x, arr[50], result;
// clrscr();
printf("Enter number of elements\n");
scanf("%d",&n);

 printf("Enter %d integers\n", n);
for (i = 0; i < n; i++)
scanf("%d",&arr[i]);

 printf("Enter value to find\n");
scanf("%d", &x);

 result = binarySearch(arr, 0, n-1, x);
(result == -1)? printf("\nElement is not present in array")
: printf("\nElement is present at index %d",result+1);

 getch();
}