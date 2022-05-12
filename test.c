#include <stdio.h>
#include <string.h> 
#include <windows.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    char trash[100];
    char Word[100][100] = {0, };
    
    char Mean[100][100] = {0, };
    char Answer[100][100] = {0, };
    
    int score = 0;


    printf("테스트 단어 갯수를 적으시오 : ");
    scanf("%d", &num);

    gets(trash);

    for(int i = 0; i < num; i++)
        gets(Word[i]);

    for(int i = 0; i < num; i++)
        gets(Mean[i]);

    system("cls");
    int flag[100] = {0,};
    for(int i = 0; i < num; i++)
    {
        int j = 0;

        a:
        j = rand()%num;
        
        if(flag[j] == 1)
            goto a;

        else
        {
            printf("%d. %s     :       ", i+1 , Mean[j]);
            gets(Answer[j]);

            int debugnum = strcmp(Answer[j], Word[j]);

            if (debugnum == 0)
            {
                score++;
                printf("OOO정답입니다!OOO                                 score : %d \n", score);
                
            }

            else
            {
                printf("XXX오답입니다 메롱XXX                             score : %d  \n", score);
                printf("사실 정답은 %s 이지롱 바보\n", Word[j], score);
            }

            flag[j] = 1;
            printf("다음 문제.....  Enter Please \n");
            getchar();
            system("cls");
        }
    }

    printf("당신의 점수는~~~~~~~~~~~~~~~~~~~    %d점 입니다!   \n", score);
    
return 0;
}