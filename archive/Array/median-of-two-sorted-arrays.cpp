// https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/ 
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int i,j;
        i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i++]);
            } else{
                res.push_back(nums2[j++]);
            }
        }
        while(i<nums1.size()){
            res.push_back(nums1[i++]);
        }
        while(j<nums2.size()){
            res.push_back(nums2[j++]);
        }
        int mid = res.size() / 2;
        if(res.size() % 2 == 0){
            return float(res[mid-1]+res[mid])/2;
        } else {
            return res[mid];
        }
    }
