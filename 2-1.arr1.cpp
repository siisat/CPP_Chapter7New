//2-1. arr1.cpp �ǽ����� 2.1
#include <stdio.h>
#include <stdlib.h>
//1 ���� �迭�� ���� pointer ���
void main(){
    int odd[5] = {3, 5, 7, 9, 11};
    printf("&odd[0] = %p\n", &odd[0]);
    printf("odd = %p\n", odd);
	printf("odd+1 = %p\n", odd+1); //�迭�� �� ��° ������ �ּ�
    printf("odd[0] = %d\n", odd[0]); //�迭 ù ��° ����
    printf("*odd = %d\n", *odd); //�迭 ù ��° ���Ҹ� ����Ű�� ������
    printf("*odd+1 = %d\n", *odd+1); //�迭 ù ��° ���� + 1
    printf("*(odd+1) = %d\n\n", *(odd+1)); //�迭 ù+1 ��° ����=�� ��° ����
	system("pause");

} 