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

Main	
	pr=[0 for i in range(len(nums))]
        pr[0]=nums[0]
        if nums==pr:
            return 0
        for i in range(1,len(nums)):
            pr[i]=pr[i-1]+nums[i]
        #return pr[-1]
        if pr[0]==pr[-1]:
            return 0
        for i in range(len(pr)-1):
            if pr[i]==pr[-1]-pr[i+1]:
                    return i+1
        else:
            return -1
