#include<stdio.h>
int checkprime(int num,int i)
{
  if(i!=1){
    if(num % i !=0){
      return check prime(num, i - 1);
    }
    else{
      return 0:
    }
  }
  else{
    return 1;
  }
}
int main()
{
  int num =0;
  printf("Enter a number:456");
  scanf("%d", &num);
  if (check prime(num,num/2)==1)
    printf("Given number is prime number");
  else
    prinf("Given number is not prime number");
  return 0;
}
