#include<bits/stdc++.h>
using namespace std;

typedef struct abc{
    int parent=-1;
    int left=-1;
    int right=-1;
} NODE;

int shorty(vector<NODE> tree, int node){
    if (tree[node].left==-1 && tree[node].right==-1){
        return 1;
    }
    else if (tree[node].left==-1 && tree[node].right!=-1){
        return 1+shorty(tree, tree[node].right);
    }
    else if (tree[node].left!=-1 && tree[node].right==-1){
        return 1+shorty(tree, tree[node].left);
    }
    else{
        return 1 + min(shorty(tree, tree[node].right), shorty(tree, tree[node].left));
    }

}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){

        int n; cin >> n;

        vector<NODE> tree(n+1);
        for (int i=0; i<n-1; i++){
            int p,c;
            cin >> p >> c;

            if (tree[p].left==-1){
                tree[p].left = c;
            }
            else{
                tree[p].right = c;
            }
            tree[c].parent = p;
    
        }

        int saved=0;
        if (tree[1].left==-1 && tree[1].right==-1){
            saved = n-1;
        }
        else if (tree[1].left==-1 || tree[1].right==-1){
            saved = n-2;
        }
        else{
            saved = n-(2*shorty(tree,1)-1);
        }
        cout << saved << endl;
        tree.clear();

    }
    return 0;
}