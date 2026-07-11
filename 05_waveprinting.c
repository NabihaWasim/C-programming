/*
Program: Wave printing ao 2Darray
Language: C
Author: Nabiha Wasim
Description: This program prints the 2D array
in a wave pattern.
*/
#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the number of rows:");//user input
    scanf("%d",&row);
    printf("Enter the number of columns:");
    scanf("%d",&col);
    int arr[row][col];
    printf("ARRAY:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);//filling data in array
        }
    }
    printf("\n");
    printf("Wave printing:\n");
    for(int i=0;i<row;i++){
        if(i%2==0){    //if row is even it prints in forward direction
            for(int j=0;j<col;j++){
                printf("%d ",arr[i][j]);
           }
        }
        else{    //if odd,prints in backward direction
            for(int j=col-1;j>=0;j--){
              printf("%d ",arr[i][j]); 
        }

        }
    }  
    return 0;
}      