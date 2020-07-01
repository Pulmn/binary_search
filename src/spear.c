#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
  long long int t=0;
  int i;
  for(i=0;i<n;i++) t+=A[i]/m;
  return t<k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb=0,ub=1e9+1;
  while(ub-lb>1){
    int mid=(lb+ub)/2;
    if(p(mid)) ub=mid;
    else lb=mid;
  }
  printf("%d\n",lb);
  return 0;
}
