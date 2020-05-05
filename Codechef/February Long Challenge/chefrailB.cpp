#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define pi 3.14159265359
# define str string
# define vll vector<ll>
# define vstr vector<str>
# define vpll vector<pair<ll,ll> >
//assign() assignes new value
//emplace(position,x) inserting
//erase(position) to remove an element
//swap() for swapping
//reverse(position,position) for reversing
# define pb push_back
# define popb pop_back
# define pf push_front
# define popf pop_front
# define sll set<ll>
//find()
//erase(x) removes element x
//erase(position,position)
# define qll queue<ll>
# define qstr queue<str>
//front(),back()
# define stll stack<ll>
# define ststr stack<str>
//top()
# define dll deque<ll>
//at()
# define mll map<ll,ll>
# define msl map<str,ll>
# define mls map<str,ll>
# define mstr map<str,str>
# define mcl map<char,ll>
# define pll pair<ll,ll>
# define f(x,y) for(int x=0;x<y;x++)
# define r(x,y) for(int x=y;x>=0;x--)
# define fr(x,y,z) for(int x=y;x<z;x++)
# define rr(x,y,z) for(int x=y;x>z;x--)
ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return (a*b)/gcd(a, b);
}
void print(vll a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,s,x,flag1;
    mll a,b,c,d;
    cin>>t;
    f(i,t){
        cin>>n>>m;
        s=0,flag1=0;
        f(l,n){
            cin>>x;
            if(x<0){
                a[-x]=1;
            }
            else if(x==0){
                flag1=1;
            }
            else{
                b[x]=1;
            }
        }
        f(l,m){
            cin>>x;
            if(x<0){
                d[-x]=1;
            }
            else if(x==0){
                flag1=1;
            }
            else{
                c[x]=1;
            }
        }
        mll ::iterator j;
        mll ::iterator k;
        if(1){
            for(j=c.begin();j!=c.end();j++){
                for(k=b.begin();k!=b.end();k++){
                    if((k->first*k->first)%j->first==0 && d.find((k->first*k->first)/j->first)!=d.end() ){
                        s++;
                        cout<<k->first<<' '<<j->first<<' '<<(k->first*k->first)/j->first<<endl;
                        //cout<<j->first<<' '<<(k->first*k->first)/j->first<<' '<<k->first<<endl;
                    }
                }
            }
            for(j=c.begin();j!=c.end();j++){
                for(k=a.begin();k!=a.end();k++){
                    if((k->first*k->first)%j->first==0 && d.find((k->first*k->first)/j->first)!=d.end() ){
                        s++;
                        cout<<k->first<<' '<<j->first<<' '<<(k->first*k->first)/j->first<<endl;
                        //cout<<j->first<<' '<<(k->first*k->first)/j->first<<' '<<k->first<<endl;
                    }
                }
            }
        }
        if(1){
            for(j=a.begin();j!=a.end();j++){
                for(k=c.begin();k!=c.end();k++){
                    if((k->first*k->first)%j->first==0 && b.find((k->first*k->first)/j->first)!=b.end() ){
                        s++;
                        cout<<k->first<<' '<<j->first<<' '<<(k->first*k->first)/j->first<<endl;
                        //cout<<j->first<<' '<<(k->first*k->first)/j->first<<' '<<k->first<<endl;

                    }
                }
            }
            for(j=a.begin();j!=a.end();j++){
                for(k=d.begin();k!=d.end();k++){
                    if((k->first*k->first)%j->first==0 && b.find((k->first*k->first)/j->first)!=b.end() ){
                        s++;
                        cout<<k->first<<' '<<j->first<<' '<<(k->first*k->first)/j->first<<endl;
                        //cout<<j->first<<' '<<(k->first*k->first)/j->first<<' '<<k->first<<endl;
                    }
                }
            }
        }
        if(flag1==1){
            s=s+(c.size()+d.size())*(b.size()+a.size());
        }
        cout<<s<<endl;
        a.clear();
        b.clear();
        c.clear();
        d.clear();
    }
}