#include <stdio.h>
#include <string.h> 
#include <windows.h>

int main()
{
    int num = 0;
    char trash[100];
    char Word[100][100] = {NULL, };
    char Mean[100][100] = {NULL, };
    char Answer[100][100] = {NULL, };
    
    int score = 0;


    printf("테스트 단어 갯수를 적으시오 : ");
    scanf("%d", &num);

    gets(trash);

    for(int i = 0; i < num; i++)
        gets(Word[i]);

    for(int i = 0; i < num; i++)
        gets(Mean[i]);

    system("cls");
    for(int i = 0; i < num; i++)
    {
        printf("%d. %s     :       ", i+1 , Mean[i]);
        gets(Answer[i]);

        int debugnum = strcmp(Answer[i], Word[i]);

        if (debugnum == 0)
        {
            score++;
            printf("OOO정답입니다!OOO                                 score : %d \n", score);
            
        }

        else
        {
            printf("XXX오답입니다 메롱XXX                             score : %d  \n", score);
            printf("사실 정답은 %s 이지롱 바보\n", Word[i], score);
        }

        printf("다음 문제.....  Enter Please \n");
        getchar();
        system("cls");
    }

    printf("당신의 점수는~~~~~~~~~~~~~~~~~~~    %d점 입니다!   \n", score);
    
return 0;
}