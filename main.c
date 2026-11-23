#include <stdio.h>
#include <stdlib.h>

int main(){
int numbers[3]={2,5,7};
int i;
for(i=2;i>=0;i--){
    printf("%d\n",numbers[i]);
}
int sum=0;
for(i=0;i<3;i++){
    sum=sum+numbers[i];
    printf("sum is:%d\n",sum);
}

int marks[6]={2,4,4,5,6,2};
int size=6;
int k;
int j;
int isDuplicate;
for( k=0;k<size;k++){
    isDuplicate=0;
    for(j=0;j<size;j++){
        if(marks[k]==marks[j]&&k!=j){
            isDuplicate=1;
            break;
     }
    }
if(isDuplicate==0){
    printf(" unique nos:%d\n",marks[k]);
}
}
int ages[5]={7,23,3,45,21};
int maximum=ages[0];
int minimum =ages[0];
for(int x=0;x<5;x++){
    if (ages[x]>maximum){
        maximum=ages[x];
        printf("the max age is %d\n",maximum);}
    if (ages[x]<minimum){
        minimum=ages[x];
        printf("the minimum age is:%d\n",minimum);
    }

    }

return 0;
}
