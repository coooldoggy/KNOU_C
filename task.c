#include <stdio.h>
#include <string.h>
void personal_info();
void basicinfo(char jumin[15]);
char birthday(int centry, char jumin[15]);

int main(int argc, char const *argv[])
{
    printf("\n3명의 학생 정보를 입력하세요.\n");
    printf("------------------------------------\n");
    /* code */
    // for (size_t i = 0; i < 3; i++)
    // {
    /* code */
    personal_info();
    // }

    return 0;
}

void personal_info()
{
    char name[15];
    char hakgwa[15];
    char jumin[15];
    printf("\n이름:");
    gets(name);
    printf("\n학과:");
    gets(hakgwa);
    printf("\n주민등록번호:");
    gets(jumin);
    basicinfo(jumin[6]);
}

char birthday(int centry, char jumin[15])
{
}

void basicinfo(char jumin[15])
{
    char yeartxt = jumin[6];
    char sex[50];
    char national[50];
    int centry = 0;
    char male[] = "남자";
    char female[] = "여자";
    char korea[] = "대한민국";
    char other[] = "외국";

    switch (yeartxt)
    {
    case '1':
        centry = 19;
        strcpy(sex, male);
        strcpy(national, korea);
        break;
    case '2':
        centry = 19;
        strcpy(sex, female);
        strcpy(national, korea);
        break;
    case '3':
        centry = 20;
        strcpy(sex, male);
        strcpy(national, korea);
        break;
    case '4':
        centry = 20;
        strcpy(sex, female);
        strcpy(national, korea);
        break;
    case '5':
        centry = 19;
        strcpy(sex, male);
        strcpy(national, other);
        break;
    case '6':
        centry = 19;
        strcpy(sex, female);
        strcpy(national, other);
        break;
    case '7':
        centry = 20;
        strcpy(sex, male);
        strcpy(national, other);
        break;
    case '8':
        centry = 20;
        strcpy(sex, female);
        strcpy(national, other);
        break;
    case '9':
        centry = 18;
        strcpy(sex, male);
        strcpy(national, korea);
        break;
    case '0':
        centry = 18;
        strcpy(sex, female);
        strcpy(national, korea);
        break;
    default:
        break;
    }

    printf(" %d %s %s", centry, sex, national);
}

void is_leap(int year)
{
}
