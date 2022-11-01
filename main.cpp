#include <stdio.h>

//char�ȊO�̃e���v���[�g
template <typename Type>

Type Min(Type a, Type b) {

	if (a > b)
	{
		return static_cast<Type>(b);
	}

	if (a < b)
	{
		return static_cast<Type>(a);
	}
}

//�I�[�o�[���C�h
template<>
char Min<char>(char a, char b) {
	return printf("�����ȊO�͑���ł��܂���");
}

int main(void) {

	//��r�p����
	int a = 10;
	int b = 13;
	float c = 14.7f;
	float d = 13.5f;
	double e = 3.1415926;
	double f = 1.9980409;
	char g = 'a';
	char h = 'b';


	printf("%d\n", Min<int>(a,b));
	printf("%f\n", Min<float>(c, d));
	printf("%lf\n", Min<double>(e, f));
	printf("%c\n", Min<char>(g, h));

	return 0;

}