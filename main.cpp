#include<stdio.h>
#include<list>
#include<iostream>
using namespace std;
int main() {

	//ƒRƒ“ƒeƒi–¼
	printf("1970s\n");
	list<const char*> stations =
	{
	"Shinagawa","Tamachi","Hamamatsucho","Shinbashi",
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
	printf("2019s\n");
	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr)
	{
		
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

	printf("2022s\n");
	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr)
	{
		
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