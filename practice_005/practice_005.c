//#include <stdio.h>
//#include <stdint.h>
//#include <stdbool.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//
//	bool greater = a > b;
//	printf("a > b: %d\n", greater);
//
//	bool less = a < b;
//	printf("a < b: %d\n", less);
//
//	bool equal = a == b;
//	printf("a == b: %d\n", equal);
//
//	bool not_equal = a != b;
//	printf("a != b: %d\n", not_equal);
//
//	bool greater_or_equal = a >= b;
//	printf("a >= b: %d\n", greater_or_equal);
//
//	bool less_or_equal = a <= b;
//	printf("a <= b: %d\n", a <= b);
//
//	int score = 99;
//	printf("��ĳɼ��ȼ���%s\n", score >= 99 ? "A" : "������");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <stdbool.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//
//	bool greater = a > b; 
//	printf("a > b: %d\n", greater);
//
//	bool  less = a < b;
//	printf("a < b: %d\n", less);
//
//	bool equal = a == b;
//	printf("a ==b: %d\n", equal);
//
//	bool not_equal = a != b;
//	printf("a != b: %d\n", not_equal);
//
//	bool greater_or_equal = a >= b;
//	printf("a >= b: %d\n", greater_or_equal);
//
//	bool less_or_equal = a <= b;
//	printf("a <= b: %d\n", less_or_equal);
//
//	int score = 99;
//	printf("��ĳɼ��ȼ���%s\n", score >= 99 ? "A" : "������");
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int a = 12;
//	int b = 25;
//
//	printf("%d\n", a & b);
//	printf("%d\n", a ^ b);
//	printf("%d\n", a | b);
//
//	int temp;
//	temp = a, a = b, b = temp;
//	printf("a = %d, b = %d, temp = %d\n", a, b, temp);
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 12;
//	int b = 25;
//
//	printf("%d\n", a & b);
//	printf("%d\n", a ^ b);
//	printf("%d\n", a | b);
//	
//	int temp;
//	temp = a, a = b, b = temp;
//	printf("a = %d, b = %d, temp = %d\n", a, b, temp);
//
//	a = a + b;
//	a = a - b;
//	b = a - b;
//	printf("a = %d, b = %d\n", a, b);
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int condition_a = 0;
//	int condition_b = 1;
//
//	int res = condition_a && condition_b;
//	printf("res = %d\n", res);
//
//	res = condition_a || condition_b;
//	printf("res = %d\n", res);
//
//	return 0;
//}


//#include <stdio.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t a = 1, b = 2, c = 3;
//
//	uint32_t result = (a += 1, b += 2, c += 3);
//
//	printf("a = %d, b = %d, result = %d\n", a, b, result);
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t a = 1, b = 1, c = 1;
//
//	uint32_t result = (a += 1, b += 2, c += 3);
//
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint32_t number = 99;
//
//	if (number > 10) {
//		printf("���������10!\n");
//	}
//	else {
//		printf("�����С�ڵ���10!\n");
//	}
//
//	if (number >= 100) {
//		printf("��������ڵ���100!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	float current_temperature = -10.0f;
//
//	if (current_temperature > 35.0) {
//		printf("�������ˣ���Ҫ���յ�������");
//	}
//	else if (current_temperature <= 15) {
//		printf("����̫���ˣ���Ҫ���յ�ů����");
//	}
//	else if (current_temperature < -15) {
//		printf("���Ŷ���");
//	}
//	else {
//		printf("����Ҫ���յ���");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	float current_temperature = 35.0f;
//	
//	if (current_temperature > 35) {
//		printf("����̫���ˣ���Ҫ���յ�������");
//	}
//	else if (current_temperature >= -15) {
//		printf("����̫���ˣ���Ҫ���յ�ů����");
//	}
//	else if (current_temperature < -1) {
//		printf("���Ŷ���");
//	}
//	else {
//		printf("����Ҫ���յ���");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	double cart_total;
//	bool is_vip;
//	double discount_rate = 0.0;
//
//	is_vip = true;
//	cart_total = 120;
//
//	if (is_vip) {
//		if (cart_total > 50) {
//			discount_rate = 0.20;
//		}
//		else {
//			discount_rate = 0.05;
//		}
//	}
//	else if (cart_total > 50) {
//		discount_rate = 0.10;
//	}
//	else {
//		discount_rate = 0.00;
//	}
//
//	printf("�����ۿ�Ϊ��%.2f%%\n", discount_rate * 100);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	double cart_total;
//	bool is_vip;
//	double discount_rate = 0.0;
//
//	cart_total = 120;
//	is_vip = true;
//
//	if (is_vip) {
//		if (cart_total > 50) {
//			discount_rate = 0.20;
//		}
//		else {
//			discount_rate = 0.05;
//		}
//	}
//	else if (cart_total > 50) {
//		discount_rate = 0.10;
//	}
//	else {
//		discount_rate = 0.00;
//	}
//
//	printf("�����ۿ�Ϊ��%.2f%%\n", discount_rate * 100);
//
//	return 0;
//}


