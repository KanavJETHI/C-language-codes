// to take three coordinates  as input and see whether they lie on a straight line or not
#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Write 1st coordinate: ");
    scanf("%d %d",&x1,&y1);
    printf("Write 2nd coordinate: ");
    scanf("%d %d",&x2,&y2);
    printf("Write 3rd coordinate: ");
    scanf("%d %d",&x3,&y3);

    int m1,m2;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
// condition for points to lie on a straight is that the slope should be equal
    if (m1==m2){
        printf("The points lie on the same line");
    }
    else{
        printf("The points do not lie on the same line");
    }
    return 0;


}
