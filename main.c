#include <stdio.h>

void main() {
    char problem, answer;
    int select;

    printf("***** 타자 연습 게임 *****\n");

    printf("======================");
    printf("이 프로그램은 타자 연습을 쉽고 재미있게 즐길 수 있도록 만들어졌습니다.\n");
    printf("아래 메뉴를 참고하여 번호를 입력하여 원하시는 기능에 접근해주세요.\n\n");

    printf("1 : 글자 연습 / 2 : 낱말 연습 / 3 : 짧은 글 연습 / 4 : 긴 글 연습\n");
    printf("5 : 단어 잡기 게임 / 6 : 타자 암기 게임 / 7 : 타자 타임 어택 게임\n");
    printf("0 : 타자 연습 게임 프로그램 종료\n");
    printf("======================\n\n");

    printf("원하는 기능의 숫자 입력 : ");
    scanf("%d", &select);
    
}