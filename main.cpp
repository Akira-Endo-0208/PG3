#include<stdio.h>
#include<list>
#include<iostream>
using namespace std;
int main() {

	//コンテナ名
	list<const char*> stations =
	{
	"1970s","Shinagawa","Tamachi","Hamamatsucho","Shinbashi",
	"Yurakucho","Tokyo","kanda","Akihabara","Okatimachi",
	"Ueno","Uguisudani","Nippori","Tabata","Magome","Sugamo",
	"Ootsuka","Ikebukuro","Mejiro","Takatababa","Shinjuku",
	"Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Oosaki"
	};

	for (auto itr = stations.begin(); itr != stations.end(); ++itr)
	{
		cout << *itr << "\n";

	}
	printf("--------------------\n");

	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr)
	{
		if (strcmp(*itr,"1970s")== 0)
		{

			*itr = "2019s";
			++itr;
		}
		if (strcmp(*itr,"Tabata") == 0)
		{

			itr = stations.insert(itr, "NishiNippori");
			++itr;
		}

	}

	for (auto itr = stations.begin(); itr != stations.end(); ++itr)
	{
		cout << *itr << "\n";
	}

	printf("--------------------\n");

	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr)
	{
		if (strcmp(*itr,"2019s")== 0)
		{

			*itr = "2022s";
			++itr;
		}
		if (strcmp(*itr,"Tamachi") == 0)
		{

			itr = stations.insert(itr, "TakanawaGateway");
			++itr;
		}

	}

	for (auto itr = stations.begin(); itr != stations.end(); ++itr)
	{
		cout << *itr << "\n";
	}

	printf("--------------------\n");
	return 0;
}