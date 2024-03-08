 #include<stdio.h>
 int main(){
     int n;
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
     }
     float s=0;
     for(int i=0;i<n;i++){
         
             s += a[i];
         
     }
     float avg = s/(n*1.0) ;
     printf("%.2f",avg);
 }