#include "conway.h"

bool lives(int neighbors, bool isalive) {
    switch(neighbors) {
        case 2:
            return isalive;
        case 3:
            return true;
        default:
            return false;
    }
}
