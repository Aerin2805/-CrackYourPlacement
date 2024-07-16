// https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

 long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    int i = 0;
    int j = m-1;
    long long ans = a[j]-a[i];
    while(j<n){
        ans = min(ans,a[j]-a[i]);
        j++;
        i++;
    }
    
    return ans;
    } 