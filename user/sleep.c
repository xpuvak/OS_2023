#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int ticks;

  if(argc != 2)
    fprintf(2, "sleep usage: sleep exit<ticks>\n");

  ticks = atoi(argv[1]);

  sleep(ticks);

  exit(0);
}
