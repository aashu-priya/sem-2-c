#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a[6]={1,2,3,4,5,6};
    int i,j,k,n;
    n=6;
    for (i = 0; i < n / 2; i++){
        swap(&a[i], &a[n-1-i]);
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}