#include<stdio.h>
int main(){
    int n;
    printf("For which number do you want to write the table: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int m = n*i;
        printf("%d*%d=%d \n",n,i,m);
    }
    return 0;
}
