#include<stdio.h>
int main(){
    int n,m;
     scanf("%d%d",&n,&m);
    int a[n][m];
    int e=0,o=0;
    for(int i=0;i<n;i++)
     for(int j=0;j<m;j++){
         scanf("%d",&a[i][j]);
     }
     for(int i=0;i<n;i++)
     for(int j=0;j<m;j++){
         if(a[i][j]%2==0){
            e = e+a[i][j]; 
         }
         else{
             o = o+a[i][j];
         }
     }
     printf("%d %d",e,o);
}