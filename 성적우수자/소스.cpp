#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

struct student list[] = { { 20180001, "�̱ݺ�", 4.2},
{2020102012, "�̻�",3.3},
{ 2020102, "��̶�", 4.1 } };

int main(void)
{
	struct student super_stu;
	int i, size;

	size = sizeof(list) / sizeof(list[0]); //�迭�� ũ�⸦ ����Ѵ�.

	super_stu = list[0]; //ù ��° �л��� �ϴ� �ִ� �����̶�� ����.
	for (i = 1; i < size; i++) {
		if (list[i].grade > super_stu.grade)
			super_stu = list[i]; // ����ü ���� ����
	}
	printf("������ ���� ���� �л��� (�̸� : %s, �й�: %d, ����: %f)�Դϴ�\n",
		super_stu.name, super_stu.number, super_stu.grade);
	return 0;
}