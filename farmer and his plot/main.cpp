#include<iostream>
    using namespace std;
    long hcf(int n,int m)
    {
            if(m%n==0)
                    return n;
            else
                    return hcf(m%n,n);
    }
    int main()
    {
            int t;
            cin>>t;
            while(t--)
            {
                    long n,m,gcd,a,b;
                    cin>>n>>m;
                    if(n>m)
                            gcd=hcf(n,m);
                    else
                            gcd=hcf(m,n);
                    a=n/gcd;
                    b=m/gcd;
                    cout<<a*b<<endl;
            }
    return 0;
    }
