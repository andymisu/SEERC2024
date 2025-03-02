    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int n;
        cin>>n;
        long long maxi = 0;
        long long s = 0;
        for(int i = 0; i < n; i++){
            long long x;
            cin>>x;
            maxi = max(maxi,x);
            s += x;
        }
        if(s == 0){
            cout<<"Puss in Boots";
            return 0;
        }
        if(s - maxi < n){
            cout<<"Donkey";
        }else{
            cout<<"Puss in Boots";
        }
        return 0;
    }

