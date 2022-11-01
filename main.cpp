#include <stdio.h>

//char以外のテンプレート
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

//オーバーライド
template<>
char Min<char>(char a, char b) {
	return printf("数字以外は代入できません");
}

int main(void) {

	//比較用引数
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