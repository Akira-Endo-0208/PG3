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
    printf("�~�̔��a�����\n");
    scanf_s("%d", &radius);
    circle.SetRadius(radius);

    circle.size();
    circle.draw();

    printf("--------------\n\n");

    width = rectangle.GetWidth();
    printf("��`�̉��̒��������\n");
    scanf_s("%d", &width);
    rectangle.SetWidth(width);

    length = rectangle.GetLength();
    printf("\n��`�̏c�̒��������\n");
    scanf_s("%d", &length);
    rectangle.SetLength(length);

    rectangle.size();
    rectangle.draw();

    return 0;
}