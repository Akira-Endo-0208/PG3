#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>


std::function<void(int*)> Result = [](int* judge) {
	if (*judge == 1)
	{
		printf("結果は当たっていました");
	}
	else {
		printf("結果は外れていました");
	}
};

std::function<void(int)> Time = [](int judge) {
	Sleep(3000);
	printf("抽選中...\n");
	Result(&judge);
};
int main(int argc, char const* argv[]) {

	
	int choice = 0;
	int dice = 0;
	int result = 0;
	int judge = 0;
	
	srand(time(NULL));

	printf("丁半博打を始めます\n");
	printf("出目が丁（偶数）になるか半（奇数）になるか選んでください\n");
	printf("丁...0 半...1\n");
	scanf_s("%d", &choice);

	dice = rand() % 6 + 1;
	if (choice >= 2)
	{
		printf("0か1を入力してください");

		return 0;
	}


	if (dice % 2 == 0)
	{
		result = 0;
	}
	else if (dice % 2 == 1)
	{
		result = 1;
	}

	if (result == 0 && choice == 0 || result == 1 && choice == 1)
	{
		judge = 1;
	}
	else
	{
		judge = 0;
	}

	Time(judge);





	return 0;
}