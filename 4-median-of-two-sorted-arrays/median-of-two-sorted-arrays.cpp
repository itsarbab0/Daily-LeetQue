class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int index;
        double median;
        // if(size1 == 0) 
        // {
        //     if((size1 % 2) == 0)
        //     {
        //         index = size2/2;
        //         median =(nums2[index] + nums2[index - 1]) / 2.0;
        //         return median;
        //     }
        //     else 
        //     {
        //         index = size2/2;
        //         median = nums2[index];
        //         return median;
        //     }
        // }
        // else if(size2 == 0) 
        // {
        //     if((size2 % 2) == 0)
        //     {
        //         index = size1/2;
        //         median = (nums1[index] + nums1[index - 1]) / 2.0;
        //         return median;
        //     }
        //     else 
        //     {
        //         index = size1/2;
        //         median = nums1[index];
        //         return median;
        //     }
        // }
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