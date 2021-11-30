#include <stdio.h>
#include "my_mat.h"

int mat[10][10];
int shortest_path_mat[10][10];
int created;

int min(int a, int b){
    if(a>=b)
        return b;
    return a; 
}

void collect_The_Mat(){
    int i=0,j=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            scanf("%d",&mat[i][j]);
    }
    i=0,j=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            shortest_path_mat[i][j] = mat[i][j];
    }
    created = 0;
    printf("filled\n");
}

void is_There_A_Path(){
    int i,j;
    scanf("%d%d",&i,&j);
    if(mat[i][j]!=0)
        printf("True\n");
    else printf("False\n");
}

void shortest_Path(){
    int i,j;
    scanf("%d%d",&i,&j);
    int result;
    if(created==0){
        created=1;
        int k,n,m;
        for(k=0;k<10;k++){
            for(n=0;n<10;n++){
                for(m=0;m<10;m++){
                    int a = shortest_path_mat[i][j];
                    int b = shortest_path_mat[i][k];
                    int c = shortest_path_mat[k][j];
                    shortest_path_mat[i][j] = min(a,b+c);
                }
            }
        }
    }
    result=shortest_path_mat[i][j];
    if(result==0)
        printf("-1\n");
    else printf("%d\n",result);
}
