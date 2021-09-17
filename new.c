#include <stdio.h>
int main (){
int num;
printf("Guess a number.\n");
scanf("%d",&num);
if (num <5)
printf("Number too small");
if (num == 5){
printf("RIGHT!");
}
else{
if(num > 5){
printf("number too big");
}
}
return 0;
}
