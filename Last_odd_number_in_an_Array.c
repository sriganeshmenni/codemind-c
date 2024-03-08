#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=a[0];
    for(int i=0;i<n;i++){
        if(a[i]%2 != 0){
            s = a[i];
        }
    }
    printf("%d",s);
}