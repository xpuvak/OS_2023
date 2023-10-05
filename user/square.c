#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/fcntl.h"
#include "user/user.h"

int
main(int argc, char* argv[]) {

    if(argc != 2) {
        fprintf(2, "Usage: square <number>");
        exit(1);
    }

    int base = atoi(argv[1]);

    int result = square();
    printf("Square of %d = %d\n", base, result);

    exit(0);
}
