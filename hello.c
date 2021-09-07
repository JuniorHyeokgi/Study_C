
#include <stdio.h>
 
int main()
{
    printf("문자를 입력해주세요.\n");

    char a[256];
    scanf("%s", a);

    printf(" \" %s \" 를 입력하셨네요..\n", a);
    return 0;
}