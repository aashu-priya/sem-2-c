#include <stdio.h>
int main(){
    int r,c,i,j,s[50][50];
    
    printf("no of rows and no of columns");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&s[i][j]);
        }
    }
    for(i=0;i<r/2;i++){
        for(j=0;j<c;j++){
            int t=s[i][j];
            s[i][j]=s[r-1-i][j];
            s[r-1-i][j]=t;
        }
    }
    printf("matrix after row swapping;\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",s[i][j]);
            }
            printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c/2;j++){
            int x =s[i][j];
            s[i][j]=s[i][c-1-j];
            s[i][c-1-j]=x;
        }
    }
    printf("matrix after row and column swapping;\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",s[i][j]);
            }
            printf("\n");
    }
    for(j=0;j<c;j++){
        int sc=0;
        for(i=0;i<r;i++){
            sc+=s[i][j];
       }
       printf("sum of %d column: ",j+1);
       printf("%d\n",sc);
    }



}
