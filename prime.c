#include<stdio.h>
int main(){
    int i,n=5,not_prime=0;
    if(n==0||n==1){
        not_prime=1;
    }
    else{

    
     for(i=2;i<n;i++){
        if(n%i==0){
            not_prime=1;
            break;
        }
        else{
            not_prime=0;
        }
    }
  }
    return 0;
}