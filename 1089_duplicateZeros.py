

def duplicateZeros(arr):
        zeroes = arr.count(0)
        n = len(arr)
        for i in range(n-1, -1, -1):
            if i + zeroes < n:
                arr[i + zeroes] = arr[i]
            if arr[i] == 0: 
                zeroes -= 1
                if i + zeroes < n:
                    arr[i + zeroes] = 0

inp=[0,1,7,5,0,2,0,7]

duplicateZeros(inp)
print(inp)