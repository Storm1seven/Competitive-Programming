# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
struct node{
    ll val;
    struct node *left, *right;
    node (ll val1){
        val = val1;
        right = NULL;
        left = NULL;
    }
};
node* insertNode(node *root, ll val){
    if (root == NULL) return new node(val);
    if (val > root->val) root->right = insertNode(root->right, val);
    else root->left = insertNode(root->left, val);
    return root;
}
void postorder(node* root){
    if (root!=NULL){
        postorder(root->right);
        postorder(root->left);
        cout<<root->val<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    node* root = NULL;
    for(ll i = n-1; i >= 0; i--) root = insertNode(root, a[i]);
    postorder(root);
    return 0;
}