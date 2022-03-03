def bubble_sort(arr):
    for i in range(1,len(arr)):
        j=0
        while(j<len(arr)-i):
            if(arr[j]>arr[j+1]):
                temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
            j+=1

    return arr


def main():
    size=int(input("Enter the size of the array:"))

    arr=[]
    print("Enter the element in the list:")
    for i in range(0,size):
        element=int(input())
        arr.append(element)

    arr=bubble_sort(arr)
    print(arr)
if __name__=="__main__":
    main()