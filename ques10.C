#include<stdio.h>
#include<string.h>
struct inventory{
    int num;
    int value;
    char name[50];
};
int main(){
    int i,j,k,n;
    printf("enter the no. of items to be entered in inventory:");
    scanf("%d",&n);
    if (n>15){
        printf("error");
    }
    else{
    struct inventory s1[n];

    for(i=0;i<n;i++){
        printf("enter the name of the %d item in inventory: ",i+1);
        scanf("%s",s1[i].name);
        printf("enter the number of items in inventory of %d item: ",i+1);
        scanf("%d",&s1[i].num);
        printf("enter the value of inventory of %d item: ",i+1);
        scanf("%d",&s1[i].value);

    }
    int snum=0,svalue=0;
    for(i=0;i<n;i++){
        snum+=s1[i].num;
        svalue+=s1[i].num*s1[i].value;
    }
    char d[50],item[50];
    int o;
    printf("\nthe total number  of the items in  inventory is %d.",snum);
    printf("\nThe total value of the inventory is %d.",svalue);
    printf("\nis there any changes:(Enter yes or no)");
    scanf("%s",d);
    if(strcmp(d , "yes")==0){
        printf("\nenter 1 for item number change or enter 2 for value change");
        scanf("%d",&o);
        if(o==1){
            printf("\nenter the name of the item to be changed: ");
            scanf("%s",item);
            for(i=0;i<n;i++){
                if(strcmp(item, s1[i].name)==0){
                    snum=snum-s1[i].num;
                    printf("enter the new num of the item:");
                    scanf("%d",&s1[i].num);
                    snum+=s1[i].num;
                    break;
                }

            }
            
        }
        if(o==2){
            printf("\nenter the name of the item to be changed: ");
            scanf("%s",item);
            for(i=0;i<n;i++){
                if(strcmp(item, s1[i].name)==0){
                    svalue=svalue-(s1[i].num*s1[i].value);
                    printf("/nenter the new value of item:");
                    scanf("%d",&s1[i].value);
                    svalue+=s1[i].num*s1[i].value;
                    break;
                }
            }
        }
        printf("\ntotal items in the inventory =%d ",snum);
        printf("\ntotal value of the inventory= %d",svalue);
    }
    if(strcmp(d,"no")==0){
         printf("\ntotal items in the inventory =%d ",snum);
        printf("\ntotal value of the inventory= %d",svalue);
    }
    


    }

}
