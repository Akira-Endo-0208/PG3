#include <stdio.h>

int Recursive(int hour) {
	if (hour == 1) {
		return (100);
	}

	return (hour * 2 - 50);
}

int main(void) {
	int hour = 5;
	int result;

	result = Recursive(hour);

}