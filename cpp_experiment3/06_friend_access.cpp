#include "06_friend_access.h"

void Y::g(X* object) const {
    ++object->i;
}

void Z::f(X* object) const {
    object->i += 5;
}

void h(X* object) {
    object->i += 10;
}
