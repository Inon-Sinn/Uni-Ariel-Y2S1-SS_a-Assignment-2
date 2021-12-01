#include <stdio.h>
#include "my_mat.h"

#define len 10
int mat[len][len];
int max=0;

int min(int a, int b){
    if(a==0 && b==0)
        return 0;
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a>=b)
        return b;
    return a; 
}

void printMatrix(){
    int i=0,j=0;
    for(i=0;i<len;i++){
        for(j=0;j<len;j++)
            printf("%d,",mat[i][j]);
        printf("\n");
    }
    printf("\n");
}





void collect_The_Mat(){
    //Collect the matrix - works
    int i=0,j=0;
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            scanf("%d",&mat[i][j]);
            if(i!=j && mat[i][j]==0)
                mat[i][j]=-1;
        }
    }
    int k,n,m;
    for(k=0;k<len;k++){
        for(n=0;n<len;n++){
            for(m=0;m<len;m++){
                if(n!=k && m!=k && n!=m){
                    int a = mat[n][m];
                    int b = mat[n][k];
                    int c = mat[k][m];
                    if(a==-1){
                        if(b==-1 || c==-1)
                            mat[n][m] =-1;
                        else mat[n][m] = b+c;
                    }
                    else if(b==-1 || c==-1)
                            mat[n][m] =a;
                    else mat[n][m] = min(a,b+c);
                }
            }
        }
    }
}

void is_There_A_Path(){
    int i,j;
    scanf("%d%d",&i,&j);
    if(mat[i][j]!=-1 && mat[i][j]!=0){
        printf("True\n");
    }
    else printf("False\n");
}

void shortest_Path(){
    int i,j;
    scanf("%d%d",&i,&j);
    int result=mat[i][j];
    if(result==0)
        printf("-1\n");
    else printf("%d\n",result);
}
