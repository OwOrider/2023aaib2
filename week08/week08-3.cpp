#include <stdio.h>
#include <string.h>
int main()
{
    printf("�п�J�A���^��W�r:");
    char s1[30];///�r��ŧi
    scanf("%s",s1);
    char s2[30]="�A�n";///�i�b�r��ŧi�ɡA����
    printf("%s %s",s1,s2);

    s1[0]='A';///��W�r���̫e���r���A�ܦ�'A'�r��
    printf("�A���W�r�Q�令 %s\n",s1);

    printf("�A���^��W�r�����׬O %d\n",strlen(s1));
}