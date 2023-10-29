#include <bits/stdc++.h>
using namespace std;

string subarray_with_target_sum(const vector<int>& arr, int target) {
    if (arr.empty()) {
        return "It's an empty array.";
    }

    int left = 0, right = 0;
    int current_sum = arr[0];

    while (right < arr.size()) {
        if (current_sum == target) {
            string result = "Subarray with Target Sum: [";
            for (int i = left; i <= right; i++) {
                result += to_string(arr[i]);
                if (i < right) {
                    result += ", ";
                }
            }
            result += "]";
            return result;
        }

        if (current_sum < target) {
            right++;
            if (right < arr.size()) {
                current_sum += arr[right];
            }
        } else {
            current_sum -= arr[left];
            left++;
        }
    }

    return "No such subarray found.";
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    string result = subarray_with_target_sum(arr, target);

    cout << result << endl;

    return 0;
}
