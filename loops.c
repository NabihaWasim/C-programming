#include<stdio.h>
int main(){
    //int i=0;
    //while(i<=20){
    //    if(i>=10){
    //    printf("natural number is %d\n",i);
    //    }
    //    i++;
    //
    //}
    int i=0;
    int n;
    printf("enter no of natural numbers:");
    scanf("%d",&n);
    do
    {
        printf("natural number %d\n",i);
        i++;
    }while(i<n);
    return 0;
}     