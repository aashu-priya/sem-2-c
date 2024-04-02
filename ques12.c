#include<stdio.h>
void SPECIAL_NUMBER(int x);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    SPECIAL_NUMBER(n);
}
void SPECIAL_NUMBER(int x){
    int i,a[4];
    for(i=2;i>=0;i--){
        a[i]=x%10;
        x=x/10;
    }
    if(a[0]+a[1]==a[2]){
        printf("THIS IS A SPECIAL NUMBER");
    }
    else{
        printf("THIS IS NOT A SPECIAL NUMBER");
    }
}
