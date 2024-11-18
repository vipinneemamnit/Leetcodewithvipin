// https://leetcode.com/problems/insert-interval/description/

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>newinterval){
    vector<vector<int>> result;
    int i = 0, n = intervals.size();
    //[[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
    while(i < n && intervals[i][1] < newinterval[0]){
        result.push_back(intervals[i]);
        i++;
    }
    while(i < n && intervals[i][0] <= newinterval[1]){
        newinterval[0] = min(intervals[i][0], newinterval[0]);
        newinterval[1] = max(intervals[i][1], newinterval[1]);
        i++;
    }
    result.push_back(newinterval);
    while(i < n){
        result.push_back(intervals[i]);
        i++;
    }
    return result;
}
