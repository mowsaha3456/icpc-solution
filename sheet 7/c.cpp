#include<stdio.h>
void mow(int i){
    if(i>=1){
   printf("%d",i);
   if(i>1)
   printf(" ");
   mow(i-1);}
}
   int main (){
       int n;
       scanf("%d",&n);
    mow(n);
    }
