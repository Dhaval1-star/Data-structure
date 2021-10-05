# include<stdio.h>
# include<stdlib.h>



struct cirqueue {
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct cirqueue *q){
    if (((q->r+1)%q->size) == q->f) 
    {
        return 1;
    }
    return 0;
}
int isempty(struct cirqueue *q){
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}
void enque(struct cirqueue *q,int val){

    if (isfull(q)){
        printf("the queue is full ");
    }else{
        q->r = (q->r+1)%q->size;// -1 = (-1+2)%4 
        q->arr[q->r] = val;
    }

}

void display(struct cirqueue *q){
    int i = q->f;
    for (i = i+1; i <= q->r; i++)
    {
        printf("%d ,",q->arr[i]);
        // printf("%d ,",i);
    }
    
}
int main(){
    struct cirqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));

    int num,val;
   
    while (1)
    {
        printf("\nenter the \n1.enque\t 2.display the queue \t3.exit\n");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            printf("enter the value that you want to insert : \n");
            scanf("%d",&val);
            enque(&q,val);
            break;

        case 2:
            display(&q);
            break;
        
        case 3: 
            exit(0);
            break;

        default:
            printf("enter the correct value : ");
            break;
        }
    }
}