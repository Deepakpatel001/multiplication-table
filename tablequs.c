#include<stdio.h>
#include<conio.h>
int main(){
    int a,i,j;
printf("Enter your Last no.");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
    for(j=1;j<=a;j++){
        printf("%d x %d = %d\t",j,i,i*j);
    }
    printf("\n");  
}
}
