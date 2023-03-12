#include <iostream>
#include <cstdio> //printf, scanf 함수가 포함되어 있음
using namespace std;

//printf, cout, 표준 출력 함수
//scanf, cin 표준 입력 함수
//Cpp에서 cstdio를 추가하면 scanf, printf를 쓸 수 있음
//쓰임새 따라서 구분해서 쓰면 된다. 

int main() {
	int num1, num2, num3, num4;

	cout << "정수 2개 입력 : ";
	cin >> num1 >> num2;
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

	printf("정수 2개 입력 : ");
	scanf_s("%d %d", &num3, &num4);
	printf("%d + %d = %d\n", num3, num4, num3 + num4);

	return 0;
}