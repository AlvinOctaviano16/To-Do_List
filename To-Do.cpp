#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define pb push_back
#define ppb pop_back
#define all(x) x.begin(), x.end()
#define All(x) x.rbegin(), x.rend()
#define fi first
#define se second
const int MAX=1e6;
using namespace std;

void showOpt(){
    cout<<"========= Octaviano-Do List ========="<<nl<<"1. Tampilkan semua list"<<nl<<"2. Tambah Tugas Baru"<<nl<<"3. Hapus Tugas"<<nl<<"4. Exit"<<nl;
}

void load_file(vector<string>&task,const string &file){
    ifstream ifs(file);
    if(!ifs.is_open()){
        ofstream ofs(file);
        return;
    }

    string read;
    while(getline(ifs,read)){
        if(!read.empty())task.pb(read);
    }
    ifs.close();
}

int main(){
    vector<string>list;
    const string file_list="todo.txt";
    load_file(list,file_list);
    for(auto it:list)cout<<it<<nl;
    
    return 0;
}