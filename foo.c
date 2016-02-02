#include "foo.h"
#include <string.h>

void
fill_with_shit(char * target, int target_size) {
  strncpy(target, "123", target_size);
}

void
fill_foo_with_shit(struct Foo * f) {
  strncpy(f->b, "321", sizeof(f->b));
}

void
fill_with_shitd(double * target, int target_size) {
  target[0] = 123.456;
}
    
