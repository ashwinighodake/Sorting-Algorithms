def selection_sort(arr):
    for i in range(0,len(arr)-1):
        k=i
        for j in range(i+1,len(arr)):
            if(arr[j]<arr[k]):
                k=j
        
        if(k!=i):
            temp=arr[i]
            arr[i]=arr[k]
            arr[k]=temp
    return arr

def main():
    size=int(input("Enter the size of array:"))
    arr=[]
    print("Enter the elements in the list:")
    for i in range(0,size):
        element=int(input())
        arr.append(element)
    arr=selection_sort(arr)
    print(arr)

if __name__=="__main__":
    main()