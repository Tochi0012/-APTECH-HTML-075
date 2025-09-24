/*#include <stdio.h>
int main(){
    printf("%d", 10*3^6*6+5-2&&(2*2+6/3>1||2>8));
    return 0;
} */
#include <stdio.h>
int main() {
    int left = 10 * 3 ^ 6 * 6 + 5 - 2;
    int right = (2 * 2 + 6 / 3 > 1) || (2 > 8);
    int result = left && right;
    printf("left: %d\n", left);     // Will show 25
    printf("right: %d\n", right);   // Will show 1
    printf("result: %d\n", result); // Will show 1
    return 0;
}
#include <stdio.h>
int main(){
/*write a program that takes the input as a floating
 number. This number represents the cm . print out the equivalent number of feet(floating, 1 decimal) and inches 
  and inches (floating, 1 decimal), with feet and the inches given to an accuracy of one decimal place.
  assume 2.54cm per inch, and 12 inches per foot */
  float cm;
  printf("enter your cm:\t");
  scanf("%f",&cm);
  float inches = cm/2.54;
  printf("\nthe amount in inches is: %f\t",inches);
  float foot = inches/12;
  printf("\nthe amount in foot is: %f\t",foot);

 return 0;
}
