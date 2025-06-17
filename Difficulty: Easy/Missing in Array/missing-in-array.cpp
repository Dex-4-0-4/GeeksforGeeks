class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int len = arr.size();
        int ans = len+1;
        
        for(int i=0;i<len;i++){
            while(arr[i]!=i+1){
                if(arr[i]==len+1)
                break;
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        
        for(int i=0;i<len;i++){
            if(arr[i]!=i+1){
                ans = i+1;
                break;
            }
        }
        return ans;
    }
};