#include <bdd-for-c.h>
#include "conway.h"

spec("lives") {
    describe("live cells") {
        it("should return true with 2 neighbors") {
            check(lives(2, true) == true);
        }
    }
}