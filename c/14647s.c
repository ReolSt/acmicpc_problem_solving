N,M,d[504][504],R[504],C[504],m,s,n,t,c,i,j;main(){scanf("%d%d",&N,&M);for(;n=0,i<N;m=fmax(m,C[i]),++i)for(j=0;j<M;s+=c,R[j]+=c,C[i]+=c,m=fmax(m,R[j]),++j){scanf("%d",d[i]+j),t=d[i][j],c=0;for(;t;t/=10)c+=t%10==9?1:0;}printf("%d\n",s-m);}
