#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct STUDENT_INFO SINFO;

void get_studentinfo();
void insert_node(SINFO*student);
void print_list();
void delete_list();

struct STUDENT_INFO
{
	char id[16];
	char name[16];
	int score;
	struct STUDENT_INFO* next;
};

SINFO* listhead = NULL;

void main() {
	
	get_studentinfo();
	print_list();

}

void get_studentinfo() {
	SINFO student;
	printf("�л� ������ �Է��ϼ���.\n");
	printf("�Է��� ��ġ���� �й��� -1�� ��������.\n\n");
	
	while (1) {
		printf("�й�:");
		scanf("%s", student.id);
		if (strcmp(student.id, "-1") != 0) {
			printf("�̸�:");
			scanf("%s", student.name);
			printf("����:");
			scanf("%d", &student.score);
			insert_node(&student);
			printf("\n");
		}
		else break;

	}

}

void insert_node(SINFO*student) {
	SINFO* search, * previous;
	SINFO* temp = (SINFO*)malloc(sizeof(SINFO));

	strcpy(temp->id, student->id);
	strcpy(temp->name, student->name);
	temp->score = student->score;

	search = listhead;
	previous = NULL;
	while (search != NULL) {
		if (temp->score < search->score) {
			previous = search;
			search = search->next;
		}
		else break;
	}

	if (previous == NULL) {
		temp->next = listhead;
		listhead = temp;
	}
	else {
		temp->next = search;
		previous->next = temp;
	}
}

void print_list() {
	SINFO* search;
	search = listhead;
	printf("\n%16s%16s%6s\n", "�й�", "�̸�", "����");
	printf("==============================================\n");

	while (search != NULL) {
		printf("%16s", search->id);
		printf("%16s", search->name);
		printf("%6d\n", search->score);
		search = search->next;
	}
}

void delete_list() {
	SINFO* temp = listhead;
	while (listhead != NULL) {
		listhead = listhead->next;
		free(temp);
		temp = listhead;
	}
}
