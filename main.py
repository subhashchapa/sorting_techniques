'''

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

'''
def quicksort(array,start,end):
    if(start<end):
        middle=partition(array,start,end)
        quicksort(array,start,middle-1)
        quicksort(array,middle+1,end)
    return array
def partition(pspk,start,end):
    pivot=pspk[start]
    j=start
    for i in range(start+1,end+1):
        if(pivot>pspk[i]):
            j=j+1
            pspk[i],pspk[j]=pspk[j],pspk[i]
    pspk[j],pspk[start]=pspk[start],pspk[j]
    return j
    
list = []
n=int(input("enter the no.of elements"))

for i in range(n):
    a=int(input("enter the array element"))
    list.append(a)
list=quicksort(list,0,len(list)-1)
print(list)

    