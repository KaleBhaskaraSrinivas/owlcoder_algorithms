#12 14 42 56 78 98 100 target 56
Linear search:
#1
target=int(input())
for i in range(len(arr)):
	if(arr[i]==target):
		print("target is found")
		break
else:
	print("not found")

#2
target=int(input())
status=False
for i in range(len(arr)):
	if(arr[i]==target):
		status=True
		break

if(status):
	print("found")
else:
	print("not found")
