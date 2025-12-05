#include <stdio.h>
#include "add.h"
#include "reduce.h"
int main(){
 int ans;
 int first;
 int second;
 printf("enter first value:");
 scanf("%d",&first);
 printf("enter second value:");
 scanf("%d",&second);
 printf("add=%d\n",ADD(first,second));
 printf("minus=%d\n",reduce(first,second));

}