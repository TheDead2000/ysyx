int test1(int a)
{
    a = 2;
    return 0;
}
int test2(int b){
    b = 3;
    return 0;
} 
int test3(int c) {
    c = 4;
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
