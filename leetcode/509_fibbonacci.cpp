// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a = 0, b = 1, num, c, sum = 0;
//     cin >> num;

//     for (int i = 0; i < num; i++)
//     {
//         sum += a;
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     cout << "Sum = " << sum;
//     return 0;
// }

// int a,b,sum;
//         int m=n-1;
//         if (m>1)
//         {
//             a=m-1;
//             b=m-2;
//             sum=a+b;
//         }
//         else if (n==0)
//             sum=0;
//         else if(n==1)
//             sum=1;
//         return sum;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1, t, sum, n, i;
   // int ar[100];
    cin >> n ;
    i=0;
  //  for (i = i < n; i++)
  do
    {
        //ar[i] = a;
        t = a + b;
        a = b;
        b = t;
        i++;
    
    }while(i<n);
   
    cout<<a<<" "<<b;
    /*for (i = 0; i <= n; i++)
    {
        sum = sum + a;
        t = a + b;
        a = b;
        b = t;
    }*/
    return 0;
}