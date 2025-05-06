#include<stdio.h>
void main()
{
    int no,i=1,sum=0,rem;
    printf("enter no");
    scanf("%d",&no);

while(i<no){
    rem=no%i;
    if(rem==0){
        sum=sum+i;
    

    }
    i++;
}
if(sum==no)
{
    printf("no %d is perfect",no);
}
else{
    printf("no is not perfect");
}
}