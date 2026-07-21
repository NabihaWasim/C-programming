#include<stdio.h>
#include<string.h>
int main(){
    typedef struct datedata{
        int date;
        char month[15];
        int year;
    }datedata;
    datedata  a,b,c;

    a.date=11;
    strcpy(a.month,"february");
    a.year=1996;
    
    b.date=11;
    strcpy(b.month,"February");
    b.year=2017;

    c=a; //data of 'a' is copied to 'c' 
    c.date=11 ;
    if(a.date==b.date && a.date==c.date){
        printf(" All Dates are equal. ");

    }
    else if(a.date==b.date || a.date==c.date){
        printf(" One Date is equal and one is unequal.\n");
    }
    else{
        printf("Dates are unequal.");
    }
    return 0;
}    