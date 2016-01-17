#include <stdio.h>

/* Hello world 
 * by Diego.
 */

int main(int argc, char *argv[])
{
	printf("Hello world!\n");
	printf("Written by Diego Larach\n");


     /* This section includes a sum */
         int x,y,z;
 	     x=10;
         y=20;
         z= x + y;
         printf("x is %d,y is %d,z is %d\n",x,y,z);
     

         /* This expression will help us compute the volume of a box and will print out the height, width, depth, and volume. */
           int h,d,w,v;
           h=11;
           d=14;
           w=7;
           v= h*d*w;
           printf("h is %d,d is %d,w is %d, v is %d\n",h,d,w,v);
              return 0;
}
           
