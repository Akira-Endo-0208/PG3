#include "Enemy.h"
#include <stdio.h>
int Enemy::liveFlag_ = 0;

void::Enemy::Update() {

	if (liveFlag_ == 0)
	{
		for (int i = 0; i < 10; i++)
		{
			enemy[i] = 0;
			printf("enemy[%d]", enemy[i]);
		}
	}
}