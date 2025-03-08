#include <stdio.h>

void func(){
  int i = 10;
  static int j = 134;
  printf("[in func] i = %d, %p\n[in func] j = %d, %p\n", i, &i,  j, &j);
  i++;
  j++;


}

int main(){
  int i = 10345;
  static int j = 4366;

  for(int k = 0; k < 5; k++){
    printf("\t[in main] i = %d, %p\n\t[in main] j = %d, %p\n", i, &i,  j, &j);
    func();
    };

}