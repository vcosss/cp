#include<bits/stdc++.h>
using namespace std;

typedef struct abc{
    int con1=-1;
    int con2=-1;
    int con3=-1;
    bool infec = false;
} NODE;

vector<int> lostmem;
vector<NODE> tree;

int lost(int node){
    vector<int> paths;
    if (tree[node].con1!=-1 && tree[tree[node].con1].infec==false) paths.push_back(tree[node].con1);
    if (tree[node].con2!=-1 && tree[tree[node].con2].infec==false) paths.push_back(tree[node].con2);
    if (tree[node].con3!=-1 && tree[tree[node].con3].infec==false) paths.push_back(tree[node].con3);

    tree[node].infec=true;
    if (paths.size()==0) return 1;
    else if (paths.size()==1) return 2;
    else {
        if (lostmem[paths[0]]==-1) lostmem[paths[0]] = lost(paths[0]);
        if (lostmem[paths[1]]==-1) lostmem[paths[1]] = lost(paths[1]);
        return 2 + min(lostmem[paths[0]], lostmem[paths[1]]);
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
        NODE bla;
        tree.resize(n+1,bla);
        lostmem.resize(n+1,-1);
        
        for (int i=0; i<n-1; i++){
            int a,b;
            cin >> a >> b;

            if (tree[a].con1==-1) tree[a].con1=b;
            else if (tree[a].con2==-1) tree[a].con2=b;
            else tree[a].con3=b;

            if (tree[b].con1==-1) tree[b].con1=a;
            else if (tree[b].con2==-1) tree[b].con2=a;
            else tree[b].con3=a;
        }

        cout << n-lost(1) << endl;

        tree.clear();
        lostmem.clear();
    }
    return 0;
}