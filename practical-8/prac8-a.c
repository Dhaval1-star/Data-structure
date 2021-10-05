//Program 8a: Operations on Max healp-display, Insert
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int array[100], n;

int display()
{
    int i;
    if (n == 0)
    {
        printf("Heap is empty \n");
        return 0;
    }
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
        printf("\n");
}/*End of display()*/

int insert(int num, int location){
        int parentnode;
        while (location > 0){
            parentnode =(location - 1)/2;
            if (num <= array[parentnode]){
                array[location] = num;
                return 0;
            }
            array[location] = array[parentnode];
            location = parentnode;
        }/*End of while*/
        
        array[0] = num; /*assign number to the root node */
}/*End of insert()*/

void main(){
    int choice, num;
    // clrscr();
    n = 0;/*Represents number of nodes in the heap*/
    while(1){
        printf("1.Insertion the element into heap\n");
        // printf("2.Delete the element from the heap\n");
        printf("2.Display all elements of the heap\n");
        printf("3.Quit \n");
        printf("Enter your choice for operation into heap: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element to be inserted to the heap: ");
                scanf("%d", &num);
                insert(num, n);
                n = n + 1;
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
            printf("Invalid choice \n");
        }/*End of switch */
    }/*End of while */
}/*End of main()*/