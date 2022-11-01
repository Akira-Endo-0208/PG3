#include <stdio.h>

int Recursive(int hour) {

	if (hour == 1)
	{
		return 100;
	}
	

	
	return (Recursive(hour - 1) * 2 - 50);
	
}

int main(void) {
	int hour = 6;
	
	int result;

	result = Recursive(hour);
	printf("%dŠÔ“­‚­‚ÆA%d‰~‚Ì‹‹", hour, result);

	return 0;
}