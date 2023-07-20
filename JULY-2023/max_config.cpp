  for (int i=1; i<n; i++)
    {
        // Compute next value using previous 
        // value in O(1) time
        int next_val = curr_val - (cum_sum - arr[i-1])
                       + arr[i-1] * (n-1);

        // Update current value
        curr_val = next_val;

        // Update result if required
        res = max(res, next_val);
    }
