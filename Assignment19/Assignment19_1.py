#Accept number from user and display below pattern
#Input : 5
#Output 
# * * *
# * * *
# * * *

def Pattern(iRow,iCol):


    for i in range(1,iRow+1,1):
        for j in range(1,iCol+1,1):
            print("*",end=" ")

        print("\r")
        

def main():

    iValue1 = int(input("Enter the number of row"))
    iValue2 = int(input("Enter the number of column"))


    Pattern(iValue1,iValue2)

if __name__=="__main__":
    main()