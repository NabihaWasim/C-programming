/*
Program: 90 degree rotation of 2d array[n][n]
Language: C
Concept used: Swapping
Author: Nabiha Wasim
Description: This program prints the rotation  of array[n][n] as output 
by using concept of swapping and transposing.
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
    printf("Original array is:\n");//original array
    for(int i=0;i<row_col;i++){
        for(int j=0;j<row_col;j++){
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }
    int temp;
    for(int i=0;i<row_col;i++){
        for(int j=0;j<i;j++){ //1st step to transpose the array
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        } 
        printf("\n");  
    }
    printf("Rotated array is:\n");
    for(int i=0;i<row_col;i++){
        for(int j=row_col-1;j>=0;j--){ //printing each row reversed 
            printf("%d ",arr[i][j]);   //to get 90 degree rotated array
         }
    printf("\n");
    }
    return 0;
}    