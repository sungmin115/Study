#include"Linked_list.h"

void main() {
	run();
}

void run() {
	int choice = 0;
	bool main_choice = true;

	Computer* head;
	Computer* show_com;
	head = (Computer*)malloc(sizeof(Computer));
	show_com = (Computer*)malloc(sizeof(Computer));
	head->next = NULL;

	main_display();

	while (main_choice) {
		printf("���ϴ� �޴��� ���� �Ͻÿ�. \n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			push_computer(head);
			break;
		case 2:
			break;
		case 3:
			show_com = head->next;
			show_computer(show_com);
			break;
		case 4:
			main_choice = false;
			break;
		default:
			printf("1���� 4������ ������ �Է� �Ͻÿ�. \n");
		}
	}

	show_com = head->next;
	while (show_com != NULL) {
		Computer* next = show_com->next;
		free(show_com);
		show_com = next;
	}

	free(head);
}

void push_computer(Computer* main_com) {
	int user_ram=0;

	Computer* temp_com;
	temp_com = (Computer*)malloc(sizeof(Computer));
	
	temp_com->cpu = (char*)malloc(sizeof(char) * 50);
	temp_com->name = (char*)malloc(sizeof(char) * 50);
	
	temp_com->next = main_com->next;
	main_com->next = temp_com;
	printf("1. push �� �����͸� �Է� �Ͻÿ�.\n");
	printf("ram  : ");
	scanf("%d", &user_ram);
	temp_com->ram = user_ram;
	printf("cpu  : ");
	scanf("%s", temp_com->cpu);
	printf("name : ");
	scanf("%s", temp_com->name);
}

void show_computer(Computer* show_com) {
	int count = 1;
	while (show_com != NULL) {
		printf("%d. ram  : %d\n", count, show_com->ram);
		printf("%d. cpu  : %s\n", count, show_com->cpu);
		printf("%d. name : %s\n \n", count, show_com->name);
		show_com = show_com->next;
		count++;
	}
}