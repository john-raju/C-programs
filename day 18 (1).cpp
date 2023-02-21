#include<stdio.h>
 main()
 {
 	int m,n,rev=0,r;
 	scanf("%d",&n);
 	m=n;
 	while(n>0)
 	{
 		r=n%10;
 		rev=(rev*10)+r;
 		n=n/10;
	 }
if(m==rev)
printf("%d is palindrome",m);
else
printf("%d is not palindrome",m);
 }
