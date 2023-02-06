#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"


int main() {
    Circle circle;
    Rectangle rectangle;
    int radius = 0;
    int width = 0;
    int length = 0;
    radius = circle.GetRadius();
    printf("‰~‚Ì”¼Œa‚ğ“ü—Í\n");
    scanf_s("%d", &radius);
    circle.SetRadius(radius);

    circle.size();
    circle.draw();

    printf("--------------\n\n");

    width = rectangle.GetWidth();
    printf("‹éŒ`‚Ì‰¡‚Ì’·‚³‚ğ“ü—Í\n");
    scanf_s("%d", &width);
    rectangle.SetWidth(width);

    length = rectangle.GetLength();
    printf("\n‹éŒ`‚Ìc‚Ì’·‚³‚ğ“ü—Í\n");
    scanf_s("%d", &length);
    rectangle.SetLength(length);

    rectangle.size();
    rectangle.draw();

    return 0;
}