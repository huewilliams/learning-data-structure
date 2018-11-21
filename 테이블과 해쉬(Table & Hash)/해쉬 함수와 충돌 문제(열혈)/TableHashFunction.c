#include<stdio.h>

typedef struct _empInfo
{
	int empNum; // 사원 번호
	int age; // 사원 나이 
} EmpInfo;

int getHashValue(int empNum) // 해쉬 값을 추출하는 함수 
{
	return empNum % 100; // 8자리의 직원 번호에서 두 자리수만 추출함 
	// 8자리의 직원 번호는 넓은 범위의 키이고, 추출된 두 자리수 번호는 좁은 범위의 키이다.
	// 이렇게 넓은 범위의 키를 좁은 범위의 키로 변경하는 역할을 하는 것을 '해쉬 함수' 라고한다.
	// 이 함수에서의 해쉬 함수는 % 100 이다. 
	
	// 하지만 20130003과 201310103 일 경우 서로 다른 두 키가 해쉬 함수를 통과했지만 결과가 03으로 같다.  
	// 이러한 상황을 충돌(collision)이라고 한다. 
}

int main(void)
{
	EmpInfo empInfoArr[100];
	EmpInfo emp1 = {20120003, 42};
	EmpInfo emp2 = {20130012, 33};
	EmpInfo emp3 = {20170049, 27};
	
	EmpInfo r1, r2, r3;
	
	// 키를 인덱스 값으로 이용하여 저장
	empInfoArr[getHashValue(emp1.empNum)] = emp1;
	empInfoArr[getHashValue(emp2.empNum)] = emp2;
	empInfoArr[getHashValue(emp3.empNum)] = emp3;
	
	// 키를 인덱스 값으로 이용하여 탐색
	r1 = empInfoArr[getHashValue(20120003)];
	r2 = empInfoArr[getHashValue(20130012)];
	r3 = empInfoArr[getHashValue(20170049)];
	
	// 탐색 결과 확인
	printf("사번 : %d, 나이 : %d\n", r1.empNum, r1.age);
	printf("사번 : %d, 나이 : %d\n", r2.empNum, r2.age);
	printf("사번 : %d, 나이 : %d\n", r3.empNum, r3.age);
	return 0; 
}
