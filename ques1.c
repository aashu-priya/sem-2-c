#include<stdio.h>
int main(){
    int i,a[50],b[50],c[50],n,k=0,z=0;
    printf("enter the no. of numbers in the string");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the %d number: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            b[k]=a[i];
            k++;
        }
        else{
            c[z]=a[i];
            z++;

        }
    }
    for(i=0;i<z;i++){
        printf("%d ",c[i]);
    }
    for(i=0;i<k;i++){
        printf("%d ",b[i]);
    }
     
}
