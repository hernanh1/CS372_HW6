#include "types.h"
#include "stat.h"
#include "user.h"
#include "mmu.h"

void test_func(void* arg1, void* arg2);

int
main(int argc, char *argv[])
{

  int to_print = 10;
  int print_repeats = 5;

  void* stack = malloc(128);

  clone(&test_func, (void*)to_print, (void*)print_repeats, stack);

  exit();
}

void test_func(void* arg1, void* arg2) {
  int to_print = *(int*)arg1;
  int print_repeats = *(int*)arg2;
  for(int i = 0; i < print_repeats; i++) {
    printf(1, "%d\n", to_print);
  }
}
