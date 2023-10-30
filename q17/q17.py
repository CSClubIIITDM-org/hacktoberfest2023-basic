def closest_pair(arr, k):
    d = {}
    diff = float('inf')
    pair = (-1, -1)

    for i, n in enumerate(arr):
        c = k - n

        if c in d:
            current_diff = abs(i - d[c])

            if current_diff < diff:
                diff = current_diff
                pair = (arr[d[c]], n)

        d[n] = i

    if diff == float('inf'):
        return -1
    else:
        return pair

input_str = input("Enter a list of integers separated by spaces: ")
target = int(input("Enter the target sum: "))

input_list = list(map(int, input_str.split()))
result = closest_pair(input_list, target)

if result == -1:
    print("No pair found.")
else:
    print("Closest pair:", result[0], result[1])
