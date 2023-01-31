#include "Enemy.h"
#include <stdio.h>

bool Enemy::isAllAlive = false;

Enemy::Enemy() {

	isAlive = true;
	isAllAlive = true;
}

Enemy::~Enemy(){}

bool Enemy::IsAlive()
{
	return isAlive;
}

void Enemy::SetDeath()
{
	isAlive = false;
	isAllAlive = false;
}

void Enemy::Update() {
	if (isAllAlive == false)
	{
		isAlive = false;
	}

}

void Enemy::Draw()
	{
	if(IsAlive() == true)
		{
		printf("“G‚Í¶‘¶’†\n");
		}
	else
	{
		printf("“G‚Í€–S\n");
	}
}