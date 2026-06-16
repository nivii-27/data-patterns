#include <stdio.h>
#include <stdbool.h>

bool haveOppositeSignsLogical(int x, int y) {
    return (x < 0 && y >= 0) || (x >= 0 && y < 0);
}
