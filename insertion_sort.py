def insertion_sort(arr):
    j=0
    temp=0
    
    for i in range(1,len(arr)):
        temp=arr[i]
        j=i-1

        while(j>=0)and(temp<arr[j]):
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=temp

    return arr

def main():
    print("Enter the size of the list")
    size=int(input())
    
    arr=[]
    for i in range(0,size):
        element=int(input())
        arr.append(element)

    
    arr=insertion_sort(arr)
    print(arr)
if __name__=="__main__":
    main()