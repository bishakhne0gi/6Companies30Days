#include <bits/stdc++.h>
using namespace std;
bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int lx_1=rec1[0], ly_1=rec1[1], ux_1=rec1[2], uy_1=rec1[3];
        int lx_2=rec2[0], ly_2=rec2[1], ux_2=rec2[2], uy_2=rec2[3];
        if(lx_1==ux_1 || ly_1==uy_1 || lx_2==ux_2 || ly_2==uy_2) return false;
        if(lx_2>=ux_1 || lx_1>= ux_2) return false;
        if(uy_1<=ly_2 || uy_2<= ly_1) return false;
        
        return true;
}        
int main()
{
    vector<int> rect1(4), rect2(4);
    for(int i=0; i<4; i++)
        cin>>rect1[i];
    for(int i=0; i<4; i++)
        cin>>rect2[i];
    if(isRectangleOverlap(rect1, rect2))
        cout<<"Will overlap"<<endl;
    else
        cout<<"Won't overlap"<<endl;
    return 0;
}