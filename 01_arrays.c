/*
Program: Transpose of 2d array
Language: C
Author: Nabiha Wasim
Description: This program prints the transpose  of array as output.
*/
#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enterthe number of columns:");
    scanf("%d",&col);
    int arr[row][col];
    printf("ARRAY:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 
    printf("Transpose of the array is:\n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }   
    return 0;
}