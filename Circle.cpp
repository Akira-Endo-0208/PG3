#include "Circle.h"

void Circle::size()
{
	printf("\n%d * %d * 3.14\n", radius_, radius_);

	answer_ = radius_ * radius_ * 3.14;
	printf("= %f\n", answer_);
}

void Circle::draw()
{
	printf("�~�̖ʐς�%f\n",answer_);
}
