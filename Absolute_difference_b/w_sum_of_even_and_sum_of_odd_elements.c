#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s1=0,s2=0,ans;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
          s1 += a[i];
        }
        else{
            s2 += a[i];
        }
    }
    ans = abs(s1-s2);
    printf("%d",ans);
}