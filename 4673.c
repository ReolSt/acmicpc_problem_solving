#include <stdio.h>
#include <math.h>
int n,m=10000,ns[10000]={0,};

int d(int);

int
main() {
  for(int i=0;i<m;i++) {
    if((n=d(i))<m) {
      ns[n]=1;
    }      
  }    
  for(int i=0;i<m;i++) {
    if(!ns[i]) {
      printf("%d\n",i);
    }      
  }    
}

int d(int n) {
  int c=1,t,s;
  t=s=n;
  for(;t>=10;c++) {
    t/=10;
  }
  for(int i=1;i<=c;i++) {
    s+=(n-n/(int)pow(10,i)*pow(10,i))/pow(10,i-1);
  }    
  return s;
}
