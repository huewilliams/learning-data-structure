#include<stdio.h>
#include<stdlib.h>

typedef struct _node
{
	int data;
	struct _node * next;
}Node;

int main(void)
{
	Node * head = NULL;
	Node * tail = NULL;
	Node * cur = NULL;

	Node * newNode = NULL;
	int readData;

	// 데이터 입력
	while (1)
	{
		printf("자연수 입력 : ");
		scanf_s("%d", &readData, sizeof(int));
		if (readData < 1)
			break;

		// 노드의 추가 과정
		newNode = (Node *)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		if (head == NULL)
			head = newNode;
		else
			tail->next = newNode;

		tail = newNode;
	}
	printf("\n");

	// 데이터 출력
	printf("입력받은 데이터 전체 출력\n");
	if (head == NULL)
	{
		printf("저장된 수가 없습니다");
	}
	else {
		cur = head;
		printf("%d ", cur->data);

		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	// 메모리 해제
	if (head == NULL)
	{
		return 0; // 해제할 노드가 없음
	}
	else
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

		printf("%d를 삭제합니다.\n", head->data);
		free(delNode); // 첫 번째 노드 삭제
		while (delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNode->next;

			printf("%d를 삭제합니다.\n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}