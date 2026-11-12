#include<stdio.h>
#include "arith.h"
int main(){
int a=8,b=4;
printf("add: %d + %d=%d\n",a,b,add(a,b));
printf("sub: %d - %d=%d\n",a,b,sub(a,b));
printf("mul: %d * %d=%d\n",a,b,mul(a,b));
printf("div: %d / %d=%d\n",a,b,divide(a,b));
return 0;
}