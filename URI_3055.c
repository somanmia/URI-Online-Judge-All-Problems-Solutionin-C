#include<stdio.h>
int main(){
    
    int A,M,result;
    while(scanf("%d %d",&A,&M)!=EOF){
        result=(M*2-A);
        printf("%d\n",result);
    }
    
    
    return 0;
}
