/*
                                         cODED by-
 
 __                         __
|  | ____ __  ____________ |__|____
|  |/ /  |  \/  ___/\____ \|  \__  \
|    <|  |  /\___ \ |  |_> >  |/ __ \_
|__|_ \____//____  >|   __/|__(____  /
     \/          \/ |__|           \/
 
 
        THNX TO  ...
 ____  ____    __    ___  ____   __    __
( ___)(  _ \  /__\  / __)(_  _) /__\  (  )
 )__)  )   / /(__)\( (__   )(  /(__)\  )(__
(__)  (_)\_)(__)(__)\___) (__)(__)(__)(____)
 
                                                 %
                                               *@@@
                                              @@@@@@(
                                            ,@@@@@@@@@
                                           @@@@@@@@@@@@*
                                          @@@@@@@@@@@@@@@
                                        &@@@@@@@@@@@@@@@@@,
                                          .@@@@@@@@@@@@@
                                            #@@@@@@@@@,
                                             @@@@@@@@(
                                             %@@@@@@@.
                                             @@@@@@@@@
                                            @@@@@@@@@@@
                                         .@@@@@@@@@@@@@@@
                             @@@%/,,(&@@@@@@@@@@@@@@@@@@@@@@@&(,*(&@@@
                           %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,
                          @@@@@@@@@@@@@@@@@@@   @@   @@@@@@@@@@@@@@@@@@@&
                        #@@@@@@@@@@@@@@@@@/@@   @@   @@/@@@@@@@@@@@@@@@@@@
                       @@@@@@@@@@@@@@@@@ ,,     ,,    ,,   @@@@@@@@@@@@@@@@%
                     *@@@@@@@@@@@@@@@@@   @#  .@(*@.  #@.  &@@@@@@@@@@@@@@@@@
                    #@@ &@.  @@   @@ @@   @#  (@*,@(  #@.  @@ @@   @@  ,@(,@& (
                  .@@@@ &@.  @@   @@ @@   @#  *@**@*  #@.  @@ @@   @@  ,@(,@@@@@
                 &@@@@@@@/   @@   *@@@.   @#   %@@@   #@.   @@@,   @@   #@@@@@@@@*
                @@@@@@@@@   #@@&  *@@,   @@@*  @@@   ,@@@   @@#   &@@%  %@@@@@@@@@@
              &@@@@@@@@@@@,,@/.@/  /@,  @@ @@   @@   @&.@@   @(  (@**@, &@@@@@@@@@@@.
             @@@@@@@@@@@@@@@@/.@#  /@,  @@ @@   @@   @&.@@   @(  #@,*@*@@@@@@@@@@@@@@&
           #@@@@@@@@@@@@@@@@@#,@*  /@,  &@ @@   @@   @@ @&   @(  ,@/(@@@@@@@@@@@@@@@@@@.
             .@@@@@@@@@@@@@. **    ..     /.    .,    ./     ,     **  ,@@@@@@@@@@@@@
               %@@@@@@@@@@  ,@@   @@#@(  *@#   @@@@  .%@.  (@/@&  *@@   @@@@@@@@@@@,
               .&@@@@@@@@@.  @@   @@ @@   @#  /@*,@(  #@.  @@ @@   @@  ,@(@@@@@@@@(
                (@@@@@@@@@.  @@   @@ @@   @#  /@*,@(  #@.  @@ @@   @@  ,@(%@@@@@@@.
                @@@@@@@@@@   @@   @@#@(   @#   @@@@   #@.  /@#@@   @@   @@@@@@@@@@&
               @@@@@@@@@@@   ./    ,,     (,   .,*    ,(    ,,.    //   .@@@@@@@@@@&
            .@@@@@@@@@@@@@@@@#,@,  /@,  &@ @@   @@   @@ @&   @(  *@//@.@@@@@@@@@@@@@@&
@@@(,..,#@@@@@@@@@@@@@@@@@@@@@@@%,.(@#@@@@ &@   @@   @& @@@@@@#..%@@@@@@@@@@@@@@@@@@@@@@@@(,..,(@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.@@   @@   @& @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@.       *@@@@@@@@@@@@@@@@@@@,   @@   ,@@@@@@@@@@@@@@@@@@@@.       /@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@#               @@@@@@@@@@@@@@@@@  %@@@  (@@@@@@@@@@@@@@@@/               @@@@@@@@@@@@@@
@@@@@@@@@@@                   @@@@@@@@@@@@@@@@@@*,@*@@@@@@@@@@@@@@@@@                   @@@@@@@@@@@@
@@@@@@@@@@                     @@@@@@@@@@@@@@@@@*,@@@@@@@@@@@@@@@@@@                    .@@@@@@@@@@@
 
*/
 
 
 
#include <bits/stdc++.h>
#include <algorithm>
#include <utility>
#include<vector>
#include<stack>
#include <set>
//
#define ll long long int
#define ld  double
#define l1(x,y) for(ll i=x;i<y;i++)
#define l2(x,y) for(ll j=x;j<y;j++)
#define l3(x,y) for(ll k=x;k<y;k++)
#define l4(x,y,uu) for(ll o=x;o<y;o+=uu)
#define lminus(x,y) for(ll zz=x;zz>y;zz--)
#define mkp make_pair
#define fi first
#define si second
#define pb push_back
#define pll pair<ll,ll>
#define pii pair<int,int>
#define lc <<"\n"
#define esz .size()
#define clr .clear()
#define vii vector<int>
#define vll vector<ll>
#define all(x) x.begin(),x.end()
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
//
#define pi 3.141592653589793
#define MOD 1000000007
#define maa LLONG_MAX
#define mii LLONG_MIN
//
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define lll ll t;cin>>t; while(t--)
#define kuspia int main()
#define ok return
using namespace std;
 
 
 
void aent (  ll *a , ll n )
{
l1(0,n)cin>>a[i];
}
 
string arrtostr ( ll *a , ll n )
{
ostringstream os;l1(0,n)os<<a[i];string str(os.str());return str;
}
 
 
///////////////
 
kuspia
{
io;
 
ll n , b , a;
cin>>n>>b>>a;
 
 
ll mc =a;
ll ar[n];
aent(ar,n);
ll c=0;
ll p=0;
 
while((c!=n)&&1)
{
    
    
    if(b==0&&a==0||c>=n)
        break;
    if(b==0)
    {
       // cout<<"1"<<p lc;
        c+=a;
        
        if(c>n)
        c=n;
        
        break;
    }
    
 
 
 
if(a==mc)
{
   //     cout<<"2"<<p lc;
    c++;
    a--;
    p++;
    continue;
    
}
 
    if(ar[p]==0&&a>0)
    {
        
  //       cout<<"3"<<p lc;
         
       
         
        a--;
        c++;
        p++;
        continue;
        
    }
    else if(ar[p]==0)
    {
    //     cout<<"4"<<p lc;
        b--;
        c++;
        p++;
        continue;
        
    }
    
    
    if(ar[p]==1&&b>0)
    {
        
      //  cout<<"5"<<p lc;
        
        b--;
        c++;
        p++;
        
        if(a<mc)
            a++;
            
            continue;
            
        
    }
}
 
 
cout<<c ;
 
}
