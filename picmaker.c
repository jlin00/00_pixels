#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <math.h>

int main(){
  FILE * fp = fopen("image.ppm", "w");
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  fprintf(fp, "P3\n500 500\n255\n"); //header
  int i, j;
  double frequency = 0.01;
  int width = 25;
  int center = 230;
  for (i = 0; i < 500; i++){
    for (j = 0; j < 500; j++){
      double shift = (j / 25 + 1) * 0.75;
      int red = sin(frequency * i - shift) * width + center;
      int green = sin(frequency * i + 2 - shift) * width + center;
      int blue = sin(frequency * i + 4 - shift) * width + center;
      fprintf(fp, "%d %d %d\n", red, green, blue);
    }
  }
  fclose(fp);
  return 0;
}
