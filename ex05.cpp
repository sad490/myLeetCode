#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> ret;
    for(int i = 0, j = 0; i < nums1.size() && j < nums2.size();)
    {
        if(nums1[i] > nums2[j]) {
            j++;
        } else if (nums1[i] < nums2[j]) {
            i++;
        } else {
            ret.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    for(int i = 0;  i < ret.size(); ++i) {
        cout << ret[i] << endl;
    }    

    return 0;
}
