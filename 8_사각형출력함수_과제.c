#include <iostream>
using namespace std;
void draw_line(int length, char border, bool fill = true) {
	for (int l = 0; l < length; l++) {
		if (fill == true || l == 0 || l == length-1) //fill이 true거나 위치가 처음이거나 마지막일 때
			cout << border; //입력받은 문자 출력
		else //fill이 false거나 중간일 때
			cout << ' ';
	}
	cout << endl;
}
void draw_rect(int width, int height, char border) {
	if (width <= 0 || height <= 0)
		return; //가로세로 중 하나라도 0이하면 함수 종료

	for (int h = 0; h < height; h++) {
		if(h == 0 || h == height -1) //첫줄이거나 마지막 줄이면 전부 문자가 출력되게 함.
			draw_line(width, border);
		else //위의 상황에 포함되지 않는 중간줄인 경우 flase로 인수를 넣어서 중간에 공백이 출력되게 함. 
			draw_line(width, border, false);
	}
}
void draw_rect(int length, char border) {
	draw_rect(length, length, border); //가로세로가 같게 인수를 넘겨줌.
}
int main(void) {
	int length, width, height;
	char border;

	cout << "input border(char) and length(int) : ";
	cin >> border >> length; //문자, 길이 입력
	draw_rect(length, border);

	cout << "input border(char), width(int) and height(int) : ";
	cin >> border >> width >> height; //문자, 너비(가로), 높이(세로) 입력
	draw_rect(width, height, border);
}