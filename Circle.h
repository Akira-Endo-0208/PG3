#pragma once
#include "IShape.h"
#include<stdio.h>

class Circle : public IShape
{
public:
	void size() override;
	void draw() override;

	int GetRadius() { return radius_; }

	void SetRadius(int radius) { this->radius_ = radius; }
private:

	int radius_ = 0;

	float answer_ = 0;
};

