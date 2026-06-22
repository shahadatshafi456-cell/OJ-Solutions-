/*This problem is taken from Codeforces .(Absolute Cinema 2229A)
link :" https://codeforces.com/contest/2229/problem/B "*/

#include <bits/stdc++.h>
 
using namespace std ;
int main ()
{
 ios_base::sync_with_stdio(false) ;
 cin.tie(NULL) ;
 
 int t , n ;
 cin >> t ;
 while (t--)
  {
   cin >> n ;
   long long total = 0 ;
   vector <int> a(n) ;
   for (int i = 0 ; i < n ; i++)
    {
      cin >> a[i] ;
    }
  vector <int> b(n) ;
   for (int i = 0 ; i < n ; i++)
    {
      cin >> b[i] ;
    }
   for (int j = 0 ; j < n ; j++)
    {
     if ( a[j] > b[j] )
      {
       total += a[j] ;
       a[j] = b[j] ;
      } else {
       total += b[j] ;
      }
    }
   long long max_val = *max_element(a.begin(),a.end()) ;
   cout << total + max_val << "\n" ;
  }
 return 0 ;
 } 
