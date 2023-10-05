#include "kernel/fcntl.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#define BUFFER_SIZE 512

   int main(int argc, char *argv[]){
 
     int src_fd = open(argv[1], O_RDONLY);
 
     // check return value
     if(src_fd < 0){
       fprintf(2, "cp: cannot open source %s\n", argv[1]);
       exit(1);
     }
     int dest_fd = open(argv[2], O_WRONLY | O_CREATE);
 
     // check return value
     if(dest_fd < 0){
	exit(1);
     }
 	
     char buffer[BUFFER_SIZE];
     read(src_fd, buffer, BUFFER_SIZE);
     write(dest_fd, buffer, BUFFER_SIZE);


     // TU DOPLNTE KOD:
     close(src_fd);
     close(dest_fd);

     exit(1);
   }
