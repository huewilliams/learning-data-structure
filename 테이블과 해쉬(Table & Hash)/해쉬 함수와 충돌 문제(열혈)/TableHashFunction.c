#include<stdio.h>

typedef struct _empInfo
{
	int empNum; // ��� ��ȣ
	int age; // ��� ���� 
} EmpInfo;

int getHashValue(int empNum) // �ؽ� ���� �����ϴ� �Լ� 
{
	return empNum % 100; // 8�ڸ��� ���� ��ȣ���� �� �ڸ����� ������ 
	// 8�ڸ��� ���� ��ȣ�� ���� ������ Ű�̰�, ����� �� �ڸ��� ��ȣ�� ���� ������ Ű�̴�.
	// �̷��� ���� ������ Ű�� ���� ������ Ű�� �����ϴ� ������ �ϴ� ���� '�ؽ� �Լ�' ����Ѵ�.
	// �� �Լ������� �ؽ� �Լ��� % 100 �̴�. 
	
	// ������ 20130003�� 201310103 �� ��� ���� �ٸ� �� Ű�� �ؽ� �Լ��� ��������� ����� 03���� ����.  
	// �̷��� ��Ȳ�� �浹(collision)�̶�� �Ѵ�. 
}

int main(void)
{
	EmpInfo empInfoArr[100];
	EmpInfo emp1 = {20120003, 42};
	EmpInfo emp2 = {20130012, 33};
	EmpInfo emp3 = {20170049, 27};
	
	EmpInfo r1, r2, r3;
	
	// Ű�� �ε��� ������ �̿��Ͽ� ����
	empInfoArr[getHashValue(emp1.empNum)] = emp1;
	empInfoArr[getHashValue(emp2.empNum)] = emp2;
	empInfoArr[getHashValue(emp3.empNum)] = emp3;
	
	// Ű�� �ε��� ������ �̿��Ͽ� Ž��
	r1 = empInfoArr[getHashValue(20120003)];
	r2 = empInfoArr[getHashValue(20130012)];
	r3 = empInfoArr[getHashValue(20170049)];
	
	// Ž�� ��� Ȯ��
	printf("��� : %d, ���� : %d\n", r1.empNum, r1.age);
	printf("��� : %d, ���� : %d\n", r2.empNum, r2.age);
	printf("��� : %d, ���� : %d\n", r3.empNum, r3.age);
	return 0; 
}
