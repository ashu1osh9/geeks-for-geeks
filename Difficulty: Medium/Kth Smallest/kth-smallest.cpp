class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int>hpmax;
        for(int i = 0;i<arr.size();i++){
            hpmax.push(arr[i]);
            if(hpmax.size()>k){
                hpmax.pop();
            }
        }
        return hpmax.top();
    }
};