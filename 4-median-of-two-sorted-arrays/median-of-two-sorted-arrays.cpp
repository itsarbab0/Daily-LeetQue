class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int index;
        double median;
        
        vector<int> arr(size1 + size2);
        int i = 0, j =0, k = 0;

        while (i < size1 && j < size2) 
        {
            if(nums1[i] < nums2[j])
            {
                arr[k++] = nums1[i++];
            }
            else
            {
                arr[k++] = nums2[j++];
            }

        }
        while(i < size1)
        {
            arr[k++] = nums1[i++];
        }
        
        while(j < size2)
        {
            arr[k++] = nums2[j++];
        }

        int size3 = arr.size();
        if(size3 % 2 == 0)
        {
            index = size3/2;
            median = (arr[index] + arr[index - 1]) / 2.0;
            return median;
        }
        else
        {
            index = size3/2;
            median = arr[index];
            return median;
        }

        return 0;
    }
};