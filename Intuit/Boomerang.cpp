#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     unordered_map<int, unordered_map<double, int>> map; 
    
    double calDist(int x1, int y1, int x2, int y2) {
        int xDiff = abs(x1 - x2);
        int yDiff = abs(y1 - y2);
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {
        
        int res = 0;
        
        if (points.size() < 3) return 0;
        for (int i = 0; i < points.size(); i++) { 
            for (int j = 0; j < points.size(); j++) {
                if (j == i) continue;
                map[i][calDist(points[i][0], points[i][1], points[j][0], points[j][1])]++;
            }
        }
        for (auto &mapIt : map) {
            for (auto &distIt : mapIt.second) {

                res += distIt.second * (distIt.second - 1);
            }
        }
        
        return res;
    }
};