#define F(x,s,e)for(int x=s;x<e;++x)
char v[50][50],x[500],y[500];n,m,p,q,a,b=2e9,t;main(){scanf("%d%d",&n,&m);F(i,0,n){scanf("%s",v[i]);F(j,0,m){v[i][j]-='0';if(v[i][j])x[p]=i,y[p++]=j;}}F(i,0,n){F(j,0,m){t=j+1;F(k,i,n){F(l,t,m){a=0;if(!v[i][j]&&!v[k][l]){F(m,0,p)a=fmax(a,fmin(abs(x[m]-i)+abs(y[m]-j),abs(x[m]-k)+abs(y[m]-l)));b=b<a?b:a;}}t=0;}}}printf("%d\n",b);}
