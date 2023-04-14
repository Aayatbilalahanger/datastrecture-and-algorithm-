//author : aayatbilal
// linear search in datastrecture and algo
#include<stdio.h>
int main(){
    int a [5] = {10,20,30,40,50},i=0,item;
    printf("enter searching item");
    scanf("%d",&item);
    while(i<5){
        if(a[i] == item){
            printf("item found %d",i);
            break;
        }
        i++;
    }
    if(i>=5){
        printf("item not found");

    }

}