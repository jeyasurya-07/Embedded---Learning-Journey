#include <stdio.h>

typedef struct{
        int x,y;
    }point_t;

    point_t p1 = {10,20};
    point_t p2;

void fun(point_t p1, point_t *p2) {
        p2->x = p1.x;
        p2->y = p1.y;
    }

int main ()
{
    
fun(p1, &p2);

    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);

    return 0;
}       