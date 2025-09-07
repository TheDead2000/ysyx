#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[], char *envp[]) {
  setenv("PATH", "/bin:/usr/bin",1);
  printf("%d,%lx,%lx\n", argc, *argv, *envp);
  printf("argv:\n");
  for (int i = 0; i < argc; i++) {
    printf("argv[%d]: %s\n", i, argv[i]);
    }

    printf("\nenvp:\n");
    for (char **env = envp; *env != 0; env++) {
        printf("%s\n", *env);
    }

    char *path = getenv("PATH");

    printf("GETENV=%s",path);

    printf("\nEOF\n");

    return 0;
}

