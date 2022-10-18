#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int ComA = 0, ComB = 0, ComC = 0;
	int UserA = 0, UserB = 0, UserC = 0;


	srand(time(NULL)); //1초 단위로 매번 다른 시드값을 생성해 rand()함수를 호출 -> 얘를 써야 진짜 랜덤
	
	while (ComA == ComB || ComB == ComC || ComA == ComC) { //a b c가 각각 다른 값을 가지도록 함
		ComA = rand() % 10;
		ComB = rand() % 10;
		ComC = rand() % 10;

		printf("%d %d %d\n", ComA, ComB, ComC);
	}

	printf("세 자리 숫자를 맞춰보세요! : ");
	scanf_s("%d %d %d", &UserA, &UserB, &UserC); //공백 없이도 입력받는 법 찾기

	printf("입력한 숫자 : %d %d %d", UserA, UserB, UserC);


	while (UserA == ComA && UserB = ComB && UserC == ComC) {
	}
	return 0;
}