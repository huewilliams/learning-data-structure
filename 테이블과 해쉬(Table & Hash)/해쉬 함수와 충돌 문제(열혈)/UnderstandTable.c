#include<stdio.h>

typedef struct _empInfo
{
	int empNum; // ������ ���� ��ȣ : key 
	int age; // ������ ���� : value
 } EmpInfo;
 
int main(void)
{
	EmpInfo empInfoArr[1000];
	EmpInfo ei;
	int eNum;
	
	printf("����� ���� �Է�\n");
	scanf("%d %d", &(ei.empNum), &(ei.age));
	empInfoArr[ei.empNum]  = ei; // �ܹ��� ����
	
	printf("Ȯ���� ������ ��� �Է�");
	scanf("%d",&eNum);
	
	ei = empInfoArr[eNum]; // �ܹ��� Ž��
	printf("��� : %d, ���� : %d", ei.empNum, ei.age);
	return; 
 }
 
// ������ �˰� ���� : �迭�� ���̰� �����Ǿ� �����Ƿ� �����ȣ�� 1000�� �Ѿ�� �ȵȴ�. 
