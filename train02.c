//파일명 : Core C Programming 2nd Edition Chap02 Proframming Assignment02

//내용 : 학생의 번호와 학번을 입력받아 프로그램을 작성하시오. 학생의 번호는 정수로, 학점은 실수로 입력받는다.

//작성자 : 나영탁

//날짜 : 2025.03.22

//버전 : v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	int num;
	float hak;

	printf("번호?");
	scanf("%d", &num);

	printf("학점?");
	scanf("%f", &hak);

	printf("%d번 학생의 학점은 %f입니다\n", num, hak);
	
	return ;
}

int main(void)
{
	solution();

	return 0;
}