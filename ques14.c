#include<stdio.h>
#include<math.h>
int main(){
    int w[50],i,j,n;
    int *a;
    printf("no. of people");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter %d person weight",i+1);
        scanf("%d",&w[i]);
    }
    a=w;
    int s=0;
    for(i=0;i<n;i++){
        s+=*(w+i);
    }
    printf("sum of the peple's weight is:%d",s);
    double v=0.0,m,var;
    m=s/n;
    for(i=0;i<n;i++){
        v+=pow(*(w+i)-m,2);
    }
    var=pow(v/(n-1),0.5);
    printf("\nvariance of the given data is: %.2f",var);
    

}