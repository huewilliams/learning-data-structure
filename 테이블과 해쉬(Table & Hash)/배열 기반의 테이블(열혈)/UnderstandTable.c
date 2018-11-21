#include<stdio.h>

typedef struct _empInfo
{
	int empNum; // 직원의 고유 번호 : key 
	int age; // 직원의 나이 : value
 } EmpInfo;
 
int main(void)
{
	EmpInfo empInfoArr[1000];
	EmpInfo ei;
	int eNum;
	
	printf("사번과 나이 입력\n");
	scanf("%d %d", &(ei.empNum), &(ei.age));
	empInfoArr[ei.empNum]  = ei; // 단번에 저장
	
	printf("확인할 직원의 사번 입력");
	scanf("%d",&eNum);
	
	ei = empInfoArr[eNum]; // 단번에 탐색
	printf("사번 : %d, 나이 : %d", ei.empNum, ei.age);
	return; 
 }
 
// 구현후 알게 된점 : 배열의 길이가 한정되어 있으므로 사원번호가 1000을 넘어가면 안된다. 
