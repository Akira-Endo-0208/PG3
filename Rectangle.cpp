#include "Rectangle.h"

void Rectangle::size()
{
	printf("\n%d * %d\n", width_ , length_);

	answer_ = width_ * length_;
	printf("= %d\n", answer_);
}

void Rectangle::draw()
{
	printf("‹éŒ`‚Ì–ÊÏ‚Í%d\n", answer_);
}