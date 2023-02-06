#pragma once
#include "IShape.h"
#include<stdio.h>

class Rectangle : public IShape
{
public:
	void size() override;
	void draw() override;

	int GetWidth() { return width_; }

	void SetWidth(int width) { this->width_ = width; }

	int GetLength() { return length_; }

	void SetLength(int length) { this->length_ = length; }

private:

	int width_ = 0;
	int length_ = 0;
	int answer_ = 0;
};


