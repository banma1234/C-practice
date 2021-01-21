#include <stdio.h>
/* 20. 01. 21. '�����佺�׳׽��� ü'
'�����佺�׳׽��� ü' : �Ҽ��� �뷮���� ������ ��Ȯ�ϰ� ���ϴ� �˰��� */
int eratostenes();

int main() {
	int num;
	scanf("%d", &num);
	printf("\n%d", eratostenes(num));	// �Է¹��� �� ���������� �Ҽ� ���

	return 0;
}

int eratostenes(int n) {
	int arr[1001] = { 0 };
	for (int i = 2; i <= n; i++) {
		arr[i] = i;		// �迭�� �Է¹ް� �ʱ�ȭ
	}
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0)	continue;	// �ʱ�ȭ�� �迭�� ��� �Ѿ��
		for (int j = 2 * i; j <= n; j += i) {
			arr[j] = 0;		// 2���� �����ؼ� Ư�� ���� ����� �ش��ϴ� ���� ��� �����.
		}
	}
	for (int i = 2; i <= n; i++) {
		if (arr[i] != 0) printf("%d ", arr[i]);		// �����ִ� �� ��� ���
	}

	return 0;
}
