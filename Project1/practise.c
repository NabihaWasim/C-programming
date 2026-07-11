#include<stdio.h>
//int main(){
    int sum(int,int);
    int sum(int x,int y){
        printf("the sum is %d\n",x+y);
        return x+y;
    }
 int main(){  
    int c,a=4,b=5;
   // c=a+b;
   // printf("sum is %d\n",c);
    sum(a,b);
    int c1,a1=45,b1=45;
    //c1=a1+b1;
    //printf("sum is %d\n",c1);
    sum(a1,b1);

    return 0;
}