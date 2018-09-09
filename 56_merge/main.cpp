#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

//class Solution {
//public:
//    vector<Interval> merge(vector<Interval>& intervals) {
//        if(intervals.size()<2)
//            return intervals;
//        vector<Interval> vec;
//        for(int i=0;i<intervals.size();++i){
//            if(i!=intervals.size()-1&&intervals[i].end>=intervals[i+1].start){
//                Interval num = Interval(intervals[i].start,intervals[i+1].end);
//                vec.push_back(num);
//                ++i;
//            } else
//                vec.push_back(intervals[i]);
//        }
//        return vec;
//    }
//};


class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        if(intervals.size()<2)
            return intervals;
        vector<Interval> vec;
        for(int i=0;i<intervals.size()-1;++i){
            for(int j=i+1;j<intervals.size();++j){
                if(intervals[i].start>=intervals[j].start&&intervals[i].end<=intervals[j].end)
                    break;
                else if(intervals[i].start<=intervals[j].start&&intervals[i].end>=intervals[j].end){
                    intervals[j] = intervals[i];break;
                }
                else if(intervals[i].start<=intervals[j].start&&intervals[i].end<=intervals[j].end&&intervals[i].end>=intervals[j].start){
                    intervals[j].start = intervals[i].start;break;
                }
                else if(intervals[i].start>=intervals[j].start&&intervals[i].end>=intervals[j].end&&intervals[j].end>=intervals[i].start){
                    intervals[j].end = intervals[i].end;break;
                }
                if(j==intervals.size()-1)
                    vec.push_back(intervals[i]);

            }

        }
        vec.push_back(intervals[intervals.size()-1]);
        return vec;
    }
};
int main() {

//    vector<int> in{4};
//
//    Solution p;
//
//    vector<int> vec;
//
//    for(int i=0;i<vec.size();++i)
//        cout<<vec[i]<<" ";

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}