#include<stdio.h>
int main(){
    int resarr[3][3],sum=0;
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int brr[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    printf("sum of arrays are;\n");
    for(int i=0;i<=2;i++){
       for(int j=0;j<=2;j++){
        resarr[i][j]=arr[i][j]+brr[i][j];
        printf("%d ",resarr[i][j]);

    }
 } 
printf("\n");
    //int sum=0;
    for(int i=0;i<=2;i++){
       for(int j=0;j<=2;j++){
        sum=sum+resarr[i][j];
    } 
 }

    printf("sum is %d\n",sum);  
 

 return 0;
}
