#include<stdio.h>
int main(){
  long long int M,result;
  int X;
  while(1){
    scanf("%d %lld",&X,&M);
    if(X==0 && M==0){
        break;
    }
    result=X*M;
    printf("%lld\n",result);
  }
return 0;
}
