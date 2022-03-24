
#include <stdio.h>

int main()
{
    int n,remainder,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
        remainder=n%10;
        sum=sum*10+remainder;
        n=n/10;
        
}
if(temp=sum){
printf("%d is palindrome\n",sum);
}
  else{
      printf("not palindrome");
  } 
   return 0;

}