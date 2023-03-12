#include <iostream>
using namespace std;
int main() {
	int num; //변수(값을 저장하고, 그 값을 수정할 수 있는 저장 장소) 선언
	num = 3; //대입 연산자를 통해 변수 num의 저장 값 변경
	cout << "num = " << num << endl;

	//타입(데이터 형식) 상수 or 변수의 타입
	//데이터 타입에는 int 등이 있음
	//C와 차이점은 bool이라는 T/F 형태의 데이터 타입이 따로 있다. 

	//변수명을 작성할 때
	//첫번째 문자는 알파벳(대,소), underscore(언더바, _)
	//두번째 이후는 알파벳(대,소), 숫자(0~9), underscore
	//그래서 변수명은 _7_도 ok

	int _7_;
	_7_ = 4;
	cout << "_7_ = " << _7_ << endl;

	return 0;
}