/*
Program: Spiral printing ao 2Darray
Language: C
Author: Nabiha Wasim
Description: This program prints the 2D array
in a spiral pattern.
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
    printf("Spiral printing:\n");
    int  minrow=0,maxrow=row-1,mincol=0,maxcol=col-1,count=0,tne=row*col;
    while(count<tne){
        for(int j=mincol;j<=maxcol;j++){
            printf("%d ",arr[minrow][j]);
            count++;
        }
        if(count>=tne) break;
        minrow++;
        for(int i=minrow;i<=maxrow;i++){
            printf("%d ",arr[i][maxcol]);
            count++;
        }
        maxcol--;
        if(count>=tne) break;
        for(int j=maxcol;j>=mincol;j--){
            printf("%d ",arr[maxrow][j]);
            count++;
        }
        maxrow--;
        if(count>=tne) break;
        for(int i=maxrow;i>=minrow;i--){
            printf("%d ",arr[i][mincol]);
            count++;
        }
        mincol++;



        }
        return 0;

    }

    