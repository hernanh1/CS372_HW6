#include "types.h"
#include "stat.h"
#include "user.h"
#include "mmu.h"

int
main(int argc, char *argv[])
{
  int temp1 = clone();
  int temp2 = join();
  printf(1, "Clone: %d    Join: %d\n\n", temp1, temp2);

  exit();
}
