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


    printf("�׽�Ʈ �ܾ� ������ �����ÿ� : ");
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
            printf("OOO�����Դϴ�!OOO                                 score : %d \n", score);
            
        }

        else
        {
            printf("XXX�����Դϴ� �޷�XXX                             score : %d  \n", score);
            printf("��� ������ %s ������ �ٺ�\n", Word[i], score);
        }

        printf("���� ����.....  Enter Please \n");
        getchar();
        system("cls");
    }

    printf("����� ������~~~~~~~~~~~~~~~~~~~    %d�� �Դϴ�!   \n", score);
    
return 0;
}