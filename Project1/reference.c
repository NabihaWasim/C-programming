#include<stdio.h>
int sum(int*,int*);
int average(int*,int*);
int sum(int* a,int *b){
    *a=20,*b=50;
    return *a + *b;    
}
int average(int* a,int *b){
    return (*a + *b)/2;
}


int main(){
    int x=30,y=10;
    printf("the values are %d,%d\n",x,y);
    printf("sum is %d and average is %d\n",(x+y),(x+y)/2 );
    printf("sum is- %d\n",sum(&x, &y));
    printf("average is- %d\n",average(&x, &y));
    printf("the values are %d,%d\n",x,y);
    return 0;
}