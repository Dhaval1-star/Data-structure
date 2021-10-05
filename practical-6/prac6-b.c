#include <stdio.h>
#include <malloc.h>
/* Search for key in the List */
int seq_search(int key, int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i + 1;
    }
    return 0;
}
void main()
{
    int i, n, key, pos = -1, *a;
    //clrscr();
    printf("\nEnter the No of Items in the list (n):");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n); // allocating memory to array
    printf("\nEnter the %d values", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the item to be searched from the list of numbers: ");
    scanf("%d", &key);
    pos = seq_search(key, a, n);
    if (pos == 0)
    {
        printf("\nSearch unscccessful :");
    }
    else
    {
        printf("\ney(%d) found at position = %d", key, pos);
    }
    // getch();
}