#include "mbed.h"

struct IntVector {
    int x;
    int y;
};

unsigned long long modSquared(IntVector vector) {
    return vector.x*vector.x + vector.y*vector.y;
}

int main() {
    IntVector p;
    IntVector q;

    p.x = -3;
    p.y = 1;

    q = p;
    q.x = 4;

    printf("(%d, %d).  Mod-squared %llu\r\n", q.x, q.y, modSquared(q));
    printf("(%d, %d).  Mod-squared %llu\r\n", p.x, p.y, modSquared(p));

    // Do nothing, forever, when the program is complete
    while (true) sleep();
}
