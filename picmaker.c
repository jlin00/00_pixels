#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main(){
  int fd = open("image.ppm", O_CREAT | O_WRONLY, 0644);
  if (fd == -1){
    printf("%s\n", strerror(errno));
  }
  int i;
  int j;
  for (i = 0; i < 500; i++){
    for (j = 0; j < 500; j++){
      /*
      write(fd, input, strlen(input));
      if (errno != 0){
        printf("%s\n", strerror(errno));
      }
      */
    }
  }
  close(fd);
  return 0;
}
