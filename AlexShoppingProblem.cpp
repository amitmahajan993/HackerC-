#include <iostream>
#include <cstdio>
#include <valarray>
using namespace std;

int calculate(int arr[],int n)
{
int sum [n-1],sum1=0;;
int m = sizeof(sum)/ sizeof(sum[0]),

for (int i=0; i<n;i++)
   {
      if ((i-1) <0)
      {
            sum[i]=arr[i];
      }
      else
      {
        sum[i]=arr[i];
        for (int j=i-1 ;j>=0;j--)
          {
            sum[i] =sum [i] - arr[j];
              if  (sum[i]<0)
              {
                sum[i] =0;
              }
            }
          }
      }
 for(int k=0;k<m;k++)
    {
      sum1=sum1+sum[k];
    }     

return sum1 ;
   
}

int main() {
    int arr [] = {2,5,1};
   int n = sizeof(arr)/ sizeof(arr[0]);

    cout << n<<endl;
    int ans = calculate(arr,n);
    cout << ans;

    return 0;
}
