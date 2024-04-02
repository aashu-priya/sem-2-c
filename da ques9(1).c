#include<stdio.h>
float convtomiles(int *a,int *b);
int main(){
    int y,f,m;
    printf("Enter the yard and feet ");
    scanf("%d %d",&y,&f);
    printf("%d %d",y,f);
    m=convtomiles(&y,&f);
    printf("%f",m);


}
float convtomiles(int *yards,int *feet){
    int tf=(*yards*3)+*feet;
    float miles=0.0;
    miles += (float)tf / 5280.0;
    return miles;



}