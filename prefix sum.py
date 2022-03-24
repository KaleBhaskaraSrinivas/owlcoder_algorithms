def fillPrefixSum(arr, n, prefixSum):

	prefixSum[0] = arr[0]
	for i in range(1, n):
		prefixSum[i] = prefixSum[i - 1] + arr[i]

arr=[int(i) for i in input().split()]
n = len(arr)

prefixSum = [0 for i in range(n + 1)]

fillPrefixSum(arr, n, prefixSum)

for i in range(n):
	print(prefixSum[i], " ", end ="")
