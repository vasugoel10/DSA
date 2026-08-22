#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int Subset(vector<int> nums,vector<int>ans,int i,int target){
    if(i==nums.size()){
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
            }
        if(sum==target){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<" ";
            return 1;
            
        }
        else{
            return 0;
        }
    }
    ans.push_back(nums[i]);
    int count=Subset(nums,ans,i+1,target);
    ans.pop_back();
    count+=Subset(nums,ans,i+1,target);
    return count;
}
int main(){
    int N;
    cin >> N;

    vector<int> nums(N);

    for(int i = 0; i < N; i++)
        cin >> nums[i];

    int target;
    cin >> target;

    vector<int> ans;

    int count = Subset(nums, ans, 0, target);
	cout<<endl;
    cout << count;

}
