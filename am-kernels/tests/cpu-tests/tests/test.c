int test1(int a)
{
    test2(a);
}
int test2(int b){
    test3(b);
} 
int test3(int c) {
    return 0;
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
