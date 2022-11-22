#include <iostream>
// using namespace std; 를 사용하지 않은 이유
// 프로그램이 복잡해질수록 오류 초래
using std::cin;
using std::cout;

// 집주변 N(3~10000) 라면공장
// 각 공장(3~N) 까지 차례대로 번호 부여 
// 교준이 i(0~10000)번 공장 Ai(0~10000) 개의 라면을 만들고자함 
// 1.i번 공장에서 라면을 하나 구매 - 3원
// 2.i번 공장과 (i+1)번 공장에서 각각 라면을 하나씩 구매한다(1 ≤ i ≤ N-1) - 5원
// 3.i번 공장과 (i+1)번 공장, (i+2)번 공장에서 각각 라면을 하나씩 구매한다(1 ≤ i ≤ N-2) - 7원
// 최소의 비용으로 라면을 구매하고자 할때 교준이가 필요한 금액을 출력하는 프로그램
//

int main() {
	int facNum;

	cin >> facNum;

	// 동적할당 buy_1....
	int* pbuyarray = new int[facNum];
	
	for (int i = 0; i < facNum; i++)
	{
		cin >> pbuyarray[i];
	}



	return 0;
}


