#include <stdio.h>

int main() {
int i,n,rev=0;

printf("Enter a Number\n");
scanf("%d",&n);
i=n;

while(i!=0){
    rev=(rev*10)+(i%10);
    i=i/10;
}
if(rev==n){
    printf("It is a Palindrome Number\n");
}
else{
    printf("It is not a Palindrome Number\n");
} 
return 0;
}