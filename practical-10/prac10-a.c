#include<stdio.h>
#define MAXNODE 20

//Write a program to generate the adjacency matrix.
int adjmatrix[MAXNODE][MAXNODE]; /*Adjacency matrix */
int n; /* Denotes number of nodes in the graph */
int main()
{
    int max_edges,i,j,origin,destin;
    char graph_type;

    printf("Enter type of graph, directed or undirected (d/u): ");
    // fflush(stdin);
    scanf("%c",&graph_type);
    printf("Enter number of nodes : ");
    scanf("%d",&n);
    // fflush(stdin);

    if(graph_type=='u')
    max_edges=n*(n-1)/2;
    else
    max_edges=n*(n-1);

    for(i=1;i<=max_edges;i++)
    {
        printf("Enter edge %d( 0 0 to quit ) : ",i);
        scanf("%d %d",&origin,&destin);

        if( (origin==0) && (destin==0) )
            break;
        if( origin > n || destin > n || origin<=0 || destin<=0)
        {
            printf("Invalid edge!\n");
            i--;
        }
        else
        {
            adjmatrix[origin][destin]=1;
            if( graph_type=='u'){
            adjmatrix[destin][origin]=1;
            }
        }

        printf("The adjacency matrix is :\n");
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++){
                printf("%d",adjmatrix[i][j]);
                printf("\n");
            }
        }
        // getch();
    return 0;
}
}