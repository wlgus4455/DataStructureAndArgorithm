#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

struct student list[] = { { 20180001, "이금비", 4.2},
{2020102012, "이상석",3.3},
{ 2020102, "김미랑", 4.1 } };

int main(void)
{
	struct student super_stu;
	int i, size;

	size = sizeof(list) / sizeof(list[0]); //배열의 크기를 계산한다.

	super_stu = list[0]; //첫 번째 학생을 일단 최대 평점이라고 가정.
	for (i = 1; i < size; i++) {
		if (list[i].grade > super_stu.grade)
			super_stu = list[i]; // 구조체 서로 대입
	}
	printf("평점이 가장 높은 학생은 (이름 : %s, 학번: %d, 평점: %f)입니다\n",
		super_stu.name, super_stu.number, super_stu.grade);
	return 0;
}