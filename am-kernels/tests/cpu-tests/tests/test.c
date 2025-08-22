int test1(int a)
{
asm volatile("ret");
}
int test2(int b){
asm volatile("ret");
} 
int test3(int c) {
asm volatile("ret");
}
int main() {
    int a = 1;
    int b;
    int c;
  test1(a);
  test2(b);
  test3(c);
  return 0;
}
