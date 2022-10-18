l1=[]
a=int(input("Enter the size of 1st list :"))
for i in range(a):
    a1=(input())
    l1.append(a1)
print('All odd length palindromes are :',end='')
for i in range(a):
    if len(str(l1[i]))%2!=0 and str(l1[i])==str(l1[i])[::-1]:
        print( l1[i],' ',end='')
