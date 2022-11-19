#include "conway.h"

bool lives(int neighbors, bool inalive) {
    if (neighbors < 2 || neighbors > 3) {
        return false;
    }
    return true;
}
