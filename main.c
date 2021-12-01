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
           is_There_A_Path();
       if(c=='C')
           shortest_Path();
       if(c=='D')
           unfinshed = 0;
   }
   
    return 0;
}