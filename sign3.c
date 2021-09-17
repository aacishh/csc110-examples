#include <stdio.h>
int main(){
  int num;

  printf("1. Deposit\n 2. Withdrawal\n 3. Balance\n 4. Exit\n");
  scanf("%d\n",&num);

switch (num)
{
  case 1:
  printf("Deposit\n");
  break;
  case 2:
  printf("Withdrawal\n");
  break;
  case 3:
  printf("Balance\n");
  break;
  case 4:
  printf("Exit\n");
  break;

}
}
