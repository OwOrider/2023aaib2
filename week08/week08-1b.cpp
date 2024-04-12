#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int space=n-1;
		for(int k=1;k<=n;k++){
			if(k<=space)printf(" ");
			else printf("*");
		}
		printf("i:%d\n",i);
	}
}