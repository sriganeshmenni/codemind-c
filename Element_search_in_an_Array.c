#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k,f=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]==k){
            f=1;
        }
    }
    if(f>=1)printf("True");
    else printf("False");
}