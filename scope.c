#include <stdio.h>

int j = 1297;

void func3(){
  int i = 1234, j = 345;
  printf("\t\t\t[in func3] i @ %p = %d\n", (void*)&i, i);
  printf("\t\t\t[in func3] j @ %p = %d\n", (void*)&j, j);
}

void func2(){
  int i = 345;
  printf("\t\t[in func2] i @ %p = %d\n", (void*)&i, i);
  printf("\t\t[in func2] j @ %p = %d\n", (void*)&j, j);
  printf("\t\t[in func2] setting j = 345235\n");
  j = 345235;
  func3();
  printf("\t\t[back in func2] i @ %p = %d\n", (void*)&i, i);
  printf("\t\t[back in func2] j @ %p = %d\n", (void*)&j, j);
}
void func1(){
  int i = 5677;
  printf("\t[in func1] i @ %p = %d\n", (void*)&i, i);
  printf("\t[in func1] j @ %p = %d\n", (void*)&j, j);
  func2();
  printf("\t[back in func1] i @ %p = %d\n", (void*)&i, i);
  printf("\t[back in func1] j @ %p = %d\n", (void*)&j, j);
}
int main(){
  int i = 1;
  printf("\t[in main] i @ %p = %d\n", (void*)&i, i);
  printf("\t[in main] j @ %p = %d\n", (void*)&j, j);
  func1();
  printf("\t[back in main] i @ %p = %d\n", (void*)&i, i);
  printf("\t[back in main] j @ %p = %d\n", (void*)&j, j);

}

