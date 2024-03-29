#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<10;i++){
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("i:%d\n",i);
    }
}
