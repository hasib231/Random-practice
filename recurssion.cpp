//sum all n
#include<bits/stdc++.h>

using namespace std;

int printNumber(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+printNumber(n-1);

}


int main()
{
    int n,m,sum;
    cin>>n;
    cout<<endl;
    sum=printNumber(n);
    cout<<sum;
}

//m to n sum
#include<bits/stdc++.h>

using namespace std;

int printNumber(int m,int n)
{
    if(m>n)
    {
        return 0;
    }
    return m+printNumber(m+1,n);

}


int main()
{
    int n,m,sum;
    cin>>m>>n;
    cout<<endl;
    sum=printNumber(m,n);
    cout<<sum;
}

//factorial
#include<bits/stdc++.h>

using namespace std;

int printNumber(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*printNumber(n-1);

}


int main()
{
    int n,m,sum;
    cin>>n;
    cout<<endl;
    sum=printNumber(n);
    cout<<sum;
}

//GCD
#include<bits/stdc++.h>

using namespace std;

int printNumber(int n,int m)
{
    cout<<"n="<<n<<" m="<<m<<" n%m="<<n%m<<endl;
    if(n%m==0)
    {
        return m;
    }
    return printNumber(m,n%m);

}


int main()
{
    int n,m,ans;
    cin>>n>>m;
    cout<<endl;
    ans=printNumber(n,m);
    cout<<ans;
}

//find pow(n,m)
#include<bits/stdc++.h>

using namespace std;

int printNumber(int n,int m)
{
    if(m==0)
    {
        return 1;
    }
    int result=n*printNumber(n,m-1);
    cout<<"n="<<n<<" m="<<m<<" result="<<result<<endl;
    return result;

}


int main()
{
    int n,m,ans;
    cin>>n>>m;
    cout<<endl;
    ans=printNumber(n,m);
    cout<<ans;
}

