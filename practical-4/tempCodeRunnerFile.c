# include<stdio.h>
# include<stdlib.h>



struct cirqueue {
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct cirqueue *q){
    if ((q->r+1)%q->size == q->f) 
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
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
    }

}
int  deque(struct cirqueue *q){
    int a = -1;
    if (isempty(q)){
        printf("queue is empty ");
    }else{
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
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
    q.f = q.r = -1;
    q.arr = (int*) malloc(q.size*sizeof(int));

    int num,val;
    // enque(&q,10);
    // enque(&q,10);
    // enque(&q,10);
    // printf("delete element is : %d",deque(&q));
    // printf("delete element is : %d",deque(&q));
    // printf("delete element is : %d",deque(&q));
    // enque(&q,10);
    // enque(&q,10);
    // enque(&q,10);
    // if (isfull(&q))
    // {
    //     printf("queue is full ");
    // }
    // if (isempty)
    // {
    //     printf("queue is empty");
    // }
    
    
    while (1)
    {
        printf("\nenter the \n1.enque\t 2.deque\t 3.display the queue \t4.exit\n");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            printf("enter the value that you want to insert : \n");
            scanf("%d",&val);
            enque(&q,val);
            break;

        case 2:
            printf("delete element is : %d",deque(&q));
            break;

        case 3:
            display(&q);
            break;
        
        case 4: 
            exit(0);
            break;

        default:
            printf("enter the correct value : ");
            break;
        }
    }
}