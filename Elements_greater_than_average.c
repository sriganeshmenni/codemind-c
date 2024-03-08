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
     int m = s/n;
     int c=0;
for(int j=0;j<n;j++){
    if(a[j]>=m){
        c++;
    }
}
printf("%d",c);
}