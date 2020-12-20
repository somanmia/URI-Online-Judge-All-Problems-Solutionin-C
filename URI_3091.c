#include<stdio.h>
int main(){
 int A,B,rest;
 while(scanf("%d %d",&A,&B)!=EOF){
    rest=A%B;
    printf("%d\n",rest);
 }


return 0;
}
