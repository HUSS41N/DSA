int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                if((i+j) % 2 == 0){
                    for(int k=i;k<=j;k++){
                        sum+=arr[k];
                    }
                }
            }
        }
        return sum;
    }
