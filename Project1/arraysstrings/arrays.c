#include<stdio.h>
int main(){
    //int arr[5];
    /*for(int i=0;i<5;i++){
        printf("ENTER  roll-no %d student marks ",i+1);
        scanf("%d",&arrmarks[i]);
    }
    for(int i=0;i<=4;i++){
        printf("%p\n",&arrmarks[i]);
    }    
    for(int i=0;i<=4;i++){
    if(arrmarks[i]<35){
        printf("STUDENT FAILED because of %d marks and roll number is %d\n",&arrmarks[i],i+1);
    }
    //else{
    //    printf("STUDENT WITH roll-no %d PASSED beacuse of %d marks. \n",i+1,arrmarks[i]);
    //}
    }*/
    int arr[7]={1,2,1,2,2,9,6};
    
    for(int i=0;i<=7;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<7;i+=2){
        int newarr[7]=arr[i]+10;
        printf("%d",newarr[i]);
    }
    
    return 0;
}