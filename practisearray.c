#include<stdio.h>
#include<stdbool.h>
/*int reversearr(arr[],int a,int b){ 
    for(int i=a,j=b;i<=j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<=7;i++){
        printf("%d ",a[i]);
    }
}    
int main(){
    int n=8,i,j,temp,k=4;
    
    int a[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<=7;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0,j=7;i<=j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        //printf("%d ",a[i]);
    }
    for(int i=0;i<=7;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0,j=k-1;i<=j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<=7;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=k,j=n-1;i<=j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<=7;i++){
        printf("%d ",a[i]);
    }


    return 0;*/
int main(){
    int arr[10]={1,4,3,4,5,5,1,8,8,8};
    //int x;
    //int index=0;
    //printf("enter number to find:");
    //scanf("%d",&x);
    /*bool flag=false;
    for(int i=0;i<=9;i++){
        if(x==arr[i]){
            flag=true;
            index=i;
            
            break;
        }  
    }     
    if(flag==true){
        printf("no is present at index %d ",index);
    }  
    else{
        printf("no is not present");

    } */ 
    for (int i=0;i<=9;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]!=arr[j]){
                printf("unique number found  which is %d at index %d",j,i);
            }
            
        }
   
    }
    return 0;
    
}