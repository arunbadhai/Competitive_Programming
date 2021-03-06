#include<iostream>
#include<vector>
#include<climits>

using namespace std;

// solution function
int removeDuplicates(vector<int>& nums){
    if(nums.empty()) return 0;
    if(nums.size() == 1) return 1;

    int i = 0,j = 1,count = 1;
    for(;j < nums.size();j++){
      if(nums[i] < nums[j]) {swap(nums[++i],nums[j]);count = 1;}
      else if(count < 2){ swap(nums[++i],nums[j]);count++; }
    }
    return i+1;
}

int main(){
  int temp;
  vector<int> arr;
  cin>>temp;
  while(temp != -1) { arr.push_back(temp); cin>>temp; }
  cout<<removeDuplicates(arr)<<endl;
  for(auto i:arr) cout<<i<<" ";
  cout<<endl;
  return 0;
}
