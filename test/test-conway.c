#include <bdd-for-c.h>
#include "conway.h"

spec("lives") {
    describe("live cells") {
        it("should return true with 2 neighbors") {
            check(lives(2, true) == true);
        }
        it("should return true with 3 neighbors for a live cell") {
            check(lives(3, true) == true);
        }
        it("should return false with less than 2 neighbors from loneliness") {
            check(lives(0, true) == false);
            check(lives(1, true) == false);
        }
        it("should return false with more than 3 neighbors from overpopulation") {
            check(lives(4, true) == false);
            check(lives(5, true) == false);
            check(lives(6, true) == false);
            check(lives(7, true) == false);
            check(lives(8, true) == false);
        }
        it("should return true on a dead cell with 3 neighbors") {
            check(lives(3, false) == true);
        }
    }
}