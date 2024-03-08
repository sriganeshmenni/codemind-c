#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int z,c=0;
    scanf("%d",&z);
    for(int i=0;i<n;i++){
        if(a[i]==z){
          c++;
        }
    }
    if(c>=1){
    printf("%d",c);}
    else {
        printf("0");
    }
}