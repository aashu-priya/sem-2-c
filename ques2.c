#include<stdio.h>
void sort( int c[],int n);
int main(){
    int i,j,v,z,x,k=0,y=0;
    int a[50],b[50],d[50];
    printf("enter the size of the 1st array");
    scanf("%d",&v);
    for(i=0;i<v;i++){
        printf("enter the %d element",i);
        scanf("%d",&a[i]);
    }
    printf("enter the size of the 2nd array");
    scanf("%d",&z);
    for(i=0;i<z;i++){
        printf("enter the %d element",i);
        scanf("%d",&b[i]);
    }
    sort(a,v);
    sort(b,z);
    k=v+z;
    i=j=0;
    while(i<v){
        d[y++]=a[i++];
        }
    while(j<z){
        d[y++]=b[j++];
    }
    sort(d,k);
    
    for(i=0;i<k;i++){
        printf("%d ",d[i]);
    }


}
void sort(int c[],int n){
    int i,k,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(c[i]>c[j]){
                int t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
        
    }
}