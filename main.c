#include <stdio.h>
#include "my_mat.h"

int main(){

    char c;
    int unfinshed = 1; 
    while(unfinshed){
        scanf("%c",&c);
        if(c=='A')
            collect_The_Mat();
        if(c=='B')
            printf("its B\n");
        if(c=='C')
            printf("its C\n");
        if(c=='D')
            unfinshed = 0;
    }
    printf("finished the run\n");


    return 0;
}