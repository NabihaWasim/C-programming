/*
Program: Transpose of 2d array[n][n]
Language: C
Concept used: Swapping
Author: Nabiha Wasim
Description: This program prints the transpose  of array[n][n] as output 
by using concept of swapping.
*/
#include<stdio.h>
int main(){
    int row_col;
    printf("Enter the number of row_col:");
    scanf("%d",&row_col);
    int arr[row_col][row_col];
    printf("ARRAY:\n");
    for(int i=0;i<row_col;i++){
        for(int j=0;j<row_col;j++){
            scanf("%d",&arr[i][j]);
         }
    printf("\n");
    }
    printf("Original array is:\n");
    for(int i=0;i<row_col;i++){
        for(int j=0;j<row_col;j++){
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }
    int temp;
    for(int i=0;i<row_col;i++){
        for(int j=0;j<i;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        } 
        printf("\n");  
    }
    printf("Transpose is:\n");
    for(int i=0;i<row_col;i++){
        for(int j=0;j<row_col;j++){
            printf("%d ",arr[i][j]);
         }
    printf("\n");
    }
    return 0;
}    