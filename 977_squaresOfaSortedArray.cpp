#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)



vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int s=nums.size();
        int l=0,r=s-1;
        
        for(;;l++){
            if(l==s){
                r=l;
                l--;
                break;
            }

            if(nums[l]>-1){
                r=l;
                l--;
                break;
            }
        }
        
        for(;l>-1 || r<s;){
            if(l>-1 && r<s){
                if(abs(nums[l])<abs(nums[r])){
                    ans.push_back(nums[l]*nums[l]);
                    l--;
                }
                else{
                    ans.push_back(nums[r]*nums[r]);
                    r++;
                }
            }
            
            
            else if(l>-1 && r>=s){
                ans.push_back(nums[l]*nums[l]);
                l--;
            }
            
            
            else{
                ans.push_back(nums[r]*nums[r]);
                r++;
            }
        }
        
        return ans;
        
    }

int main(){
    vector<int>in;
    vector<int>out;

    in.push_back(-1);
    // in.push_back(2);

    out=sortedSquares(in);

    for(int i=0;i<out.size();i++){
        cout<<out[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}

