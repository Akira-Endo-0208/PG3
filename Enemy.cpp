#include "Enemy.h"
#include <stdio.h>


void (Enemy::* Enemy::pfuncTable[])()
= {
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::Secession
};

void Enemy::Update() {

	

	if (phase_ > 2)
	{
		phase_ = 0;
	}
	(this->*pfuncTable[phase_])();
	phase_++;
	
}

void Enemy::Approach() {

	printf("Approach\n");
}

void Enemy::Shoot() {
	printf("Shoot\n");
}

void Enemy::Secession() {
	printf("Secession\n");
}