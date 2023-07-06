#Accept number from user and display below pattern
#Input : 5
#Output 
# 1 2 3
# 1 2 3
# 1 2 3

def Pattern(iRow,iCol):


    for i in range(iRow,0,-1):
        for i in range(iCol,0,-1):
            print(i,end=" ")


        print("\r")
        

def main():

    iValue1 = int(input("Enter the number of row"))
    iValue2 = int(input("Enter the number of column"))


    Pattern(iValue1,iValue2)

if __name__=="__main__":
    main()