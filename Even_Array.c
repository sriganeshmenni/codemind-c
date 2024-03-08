#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=0,c=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            c++;
        }
    }
        if(c==n){
            printf("True");
            
        }
        else{
            printf("False");
        }
        //printf("%d",c);
}
     