#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> twosum(vector<int>& nums, int target){
        vector<int> arr(2);
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    arr[0] = i;
                    arr[1] = j;
                    return arr;
                }
            }
        }
    }
};
int main(){
    Solution test;
    vector<int> v = {2, 3, 4, 5}, res;
    res = test.twosum(v, 6);
    for(int i=0; i<2; i++)
        cout <<"[ " << res[i] << " ]";
}