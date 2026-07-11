/*
Program: Sum of array
Language: C
Author: Nabiha Wasim
Description: This program prints the row
number having the maximum sum in a given array.
*/
#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the number of rows:");//user input
    scanf("%d",&row);
    printf("Enterthe number of columns:");
    scanf("%d",&col);
    int arr[row][col];
    printf("ARRAY:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);//filling data in array
        }
    }
    printf("\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);//printing the array
        }
        printf("\n");
    } 
    int mxsum=-999,idx=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
            if(sum>mxsum){
                mxsum=sum;
                idx=i+1;
            } 
        }
    }
    printf("Row no. with max sum is %d and sum is %d",idx,mxsum);
   return 0;
}   