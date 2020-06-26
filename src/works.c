#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
  int i,t=1,s=0,b=1;
  for(i=0;i<n;i++){
    if(s+A[i]<=m) s+=A[i];
    else{
      s=A[i];
      if(s>m) b=0;
      t++;
    }
  }
  if(t>k) b=0;
  return b;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb=0,ub=1e9;
  while(ub-lb>1){
    int mid=(lb+ub)/2;
    if(p(mid)) ub=mid;
    else lb=mid;
  }
  printf("%d\n",ub);
  return 0;
}
