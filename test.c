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


    printf("�׽�Ʈ �ܾ� ������ �����ÿ� : ");
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
                printf("OOO�����Դϴ�!OOO                                 score : %d \n", score);
                
            }

            else
            {
                printf("XXX�����Դϴ� �޷�XXX                             score : %d  \n", score);
                printf("��� ������ %s ������ �ٺ�\n", Word[j], score);
            }

            flag[j] = 1;
            printf("���� ����.....  Enter Please \n");
            getchar();
            system("cls");
        }
    }

    printf("����� ������~~~~~~~~~~~~~~~~~~~    %d�� �Դϴ�!   \n", score);
    
return 0;
}