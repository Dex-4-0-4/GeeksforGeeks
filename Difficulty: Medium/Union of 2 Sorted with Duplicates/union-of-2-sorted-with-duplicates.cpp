class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        int M = a.size();
        int N = b.size();
        int i=0;
        int j=0;
        vector <int> ans;
        set <int> s;
        
        while(i<M && j<N){
            if(a[i]<=b[j]){
                s.emplace(a[i]);
                i++;
            }
            else if(b[j]<=a[i]){
                s.emplace(b[j]);
                j++;
            }
        }
        while(i<M){
            s.emplace(a[i]);
            i++;
        }
        while(j<N){
            s.emplace(b[j]);
            j++;
        }
        for(int i:s){
            ans.push_back(i);
        }
        return ans;
        // return vector with correct order of elements
    }
};