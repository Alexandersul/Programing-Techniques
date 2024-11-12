#include <stdlib.h>
#include <stdio.h>
#define STRINGIFY_AUX(val)  #val
#define STRINGIFY(txt)  STRINGIFY_AUX(txt)
#define File_Line printf ("This is line %d of file %s\n","_LINE_","_FILE_")
#define Arg(...) printf("_VA_ARGS_")
int main ()
{
   int x=5,y=7,z=9;
   File_Line;
   Arg("x=%d, y=%d, z=%d",x,y,z);

    return 0;
}
