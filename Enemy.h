#pragma once
class Enemy
{
public:

static  int liveFlag_;

Enemy() { liveFlag_++; };


void Update();


private: 
	int enemy[10] = {1,1,1,1,1,1,1,1,1,1};
};

