#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int ComA = 0, ComB = 0, ComC = 0;
	int UserA = 0, UserB = 0, UserC = 0;


	srand(time(NULL)); //1�� ������ �Ź� �ٸ� �õ尪�� ������ rand()�Լ��� ȣ�� -> �긦 ��� ��¥ ����
	
	while (ComA == ComB || ComB == ComC || ComA == ComC) { //a b c�� ���� �ٸ� ���� �������� ��
		ComA = rand() % 10;
		ComB = rand() % 10;
		ComC = rand() % 10;

		printf("%d %d %d\n", ComA, ComB, ComC);
	}

	printf("�� �ڸ� ���ڸ� ���纸����! : ");
	scanf_s("%d %d %d", &UserA, &UserB, &UserC); //���� ���̵� �Է¹޴� �� ã��

	printf("�Է��� ���� : %d %d %d", UserA, UserB, UserC);


	while (UserA == ComA && UserB = ComB && UserC == ComC) {
	}
	return 0;
}