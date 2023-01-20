#pragma once
class Enemy
{
public:


	void Approach();

	void Shoot();

	void Secession();

	void Update();

private: 

	static void (Enemy::* pfuncTable[0])();

	int phase_ = 0;
};

