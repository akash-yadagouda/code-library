
/*
 * Complete the 'getWays' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. LONG_INTEGER_ARRAY c
 */

long getWays(int n, int c_count, long* c) {


long a[n+1];
memset(a+1,0, n*sizeof(a[0])); 

a[0]=1;
for(int i=0;i<c_count;i++)
{
    for(long j=c[i];j<n+1;j++)
    {
        a[j]=a[j-c[i]]+a[j];
    }
  

}

return (a[n]);

}
