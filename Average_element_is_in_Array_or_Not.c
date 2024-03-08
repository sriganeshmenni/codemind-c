#include<stdio.h>
 int main(){
     int n;
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
     }
     int s=0;
     for(int i=0;i<n;i++){
         
             s += a[i];
         
     }
     int avg = s/n,f=0;
     for(int i=0;i<n;i++){
         if(a[i]==avg)
         {
             f=1;
         }
     }
     if(f>=1) printf("True");
     else printf("False");
 }