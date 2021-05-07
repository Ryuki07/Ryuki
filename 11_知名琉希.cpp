#include <stdio.h>
using namespace std;

void main() {

	//// 1-1
	//printf("知名琉希\n");
	//// 1-2
	//printf("123\n456\n789\n");
	//// 1-3
	//printf("%d + %d = %d\n", 1, 1, 1 + 1);
	//printf("%d + %d = %d\n", 2, 3, 2 + 3);
	//// 1-4
	//printf("%d + %d + %d = %d\n", 1, 2, 3, 1 + 2 + 3);
	//// 2-1
	//int a;
	//int b;
	//printf("a=");
	//scanf_s("%d", &a);
	//printf("b=");
	//scanf_s("%d", &b);
	//printf("aの値は%dです。\n", a);
	//printf("a + b = %d\n", a + b);
	//printf("a - b = %d\n", a - b);
	//printf("a * b = %d\n", a * b);
	//printf("a / b = %d\n", a / b);
	//printf("a %% b = %d\n", a % b);
	//// 2-2
	//int a;
	//int b;
	//printf("長方形の幅:");
	//scanf_s("%d", &a);
	//printf("長方形の高さ:");
	//scanf_s("%d", &b);
	//printf("長方形の面積は、%dｍ2", a * b);
	//// 3-1
	//int a;
	//scanf_s("%d", &a);
	//if (a >= 5) {
	//	printf("5以上です");
	//}
	//// 3-2
	//int a;
	//scanf_s("%d", &a);
	//if (a != 1) {
	//	printf("1ではありません");
	//}
	//// 3-3
	//int a;
	//scanf_s("%d", &a);
	//if (a < 50) {
	//	printf("50未満です");
	//}
	//// 3-4
	//int a;
	//scanf_s("%d", &a);
	//if (a <= 10 || a >= 90) {
	//	printf("10以下か90以上の値です");
	//}
	// 3-5
	int a;
	scanf_s("%d", &a);
	if (a >= 20 || a < 80) {
		printf("20以上80未満です");
	}
}

