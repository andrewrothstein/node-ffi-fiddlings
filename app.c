#include "foo.h"
#include <string.h>
#include <stdio.h>

int main(int argc, const char ** argv) {

  char foo[6];
  fill_with_shit(foo, sizeof(foo));
  printf("filled got: %s\n", foo);

  struct Foo f;
  memset(&f, 0, sizeof(struct Foo));
  fill_foo_with_shit(&f);
  printf("filled Foo got: %s\n", f.b);

  double v[2];
  memset(v, 0, sizeof(v));
  fill_with_shitd(v, 2);
  printf("filled foo_d got: %lf\n", v[0]);
    
    
}
