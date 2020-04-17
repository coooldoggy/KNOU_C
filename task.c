#include <stdio.h>
#include <string.h>
void personal_info();
void basicinfo(char jumin[15]);
char birthday(char centry[2], char jumin[15]);

int main(int argc, char const *argv[])
{
    printf("\n3명의 학생 정보를 입력하세요.\n");
    printf("------------------------------------\n");
    // for (size_t i = 0; i < 3; i++)
    // {
    personal_info();
    // }

    return 0;
}

/**
 * 사용자의 기본 정보를 입력받는다.
 */
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
    basicinfo(jumin);
}

/**
 * 입력받은 주민번호로 생년월일을 구한다.
 */
char birthday(char centry[4], char jumin[15])
{
    char month[2];
    char day[2];
    char yearlast[2];
    memcpy(yearlast, jumin, 2);
    strcat(centry, yearlast);
    //null문자를 붙인다.
    centry[4] = 0;
    printf(" %s ", centry);

    //주민번호 앞 6자리에서 년도를 제외한 값을 last에 저장한다.
    char lastwithmonth[6];
    memcpy(lastwithmonth, &jumin[2], 4);
    printf(" %s ", lastwithmonth);

    memcpy(month, lastwithmonth, 2);
    printf(" %s ", month);
}

/**
 * 주민번호 7번째 숫자로 성별, 출생년대, 출생지역을 구분한다.
 */
void basicinfo(char jumin[15])
{
    char yeartxt = jumin[6];
    char sex[50];
    char national[50];
    char centry[4];
    char male[] = "남자";
    char female[] = "여자";
    char korea[] = "대한민국";
    char other[] = "외국";

    switch (yeartxt)
    {
    case '1':
        strcpy(centry, "19");
        strcpy(sex, male);
        strcpy(national, korea);
        break;
    case '2':
        strcpy(centry, "19");
        strcpy(sex, female);
        strcpy(national, korea);
        break;
    case '3':
        strcpy(centry, "20");
        strcpy(sex, male);
        strcpy(national, korea);
        break;
    case '4':
        strcpy(centry, "20");
        strcpy(sex, female);
        strcpy(national, korea);
        break;
    case '5':
        strcpy(centry, "19");
        strcpy(sex, male);
        strcpy(national, other);
        break;
    case '6':
        strcpy(centry, "19");
        strcpy(sex, female);
        strcpy(national, other);
        break;
    case '7':
        strcpy(centry, "20");
        strcpy(sex, male);
        strcpy(national, other);
        break;
    case '8':
        strcpy(centry, "20");
        strcpy(sex, female);
        strcpy(national, other);
        break;
    case '9':
        strcpy(centry, "18");
        strcpy(sex, male);
        strcpy(national, korea);
        break;
    case '0':
        strcpy(centry, "18");
        strcpy(sex, female);
        strcpy(national, korea);
        break;
    default:
        break;
    }

    printf(" %s %s %s", centry, sex, national);
    birthday(centry, jumin);
}

/**
 * 년도로 윤년 여부를 구한다.
 */
void is_leap(int year)
{
}
