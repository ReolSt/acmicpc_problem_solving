#include <stdio.h>
int n;
long f[91]={0,1,};

int
main() {
  scanf("%d",&n);
  for(int i=2;i<=n;i++) {
    f[i]=f[i-1]+f[i-2];
  }
  printf("%ld\n",f[n]);
}
