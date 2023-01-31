#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	bool IsAlive();
	void SetDeath();


void Update();
	void Draw();

public:
	static bool isAllAlive;

private: 
	bool isAlive;
};

