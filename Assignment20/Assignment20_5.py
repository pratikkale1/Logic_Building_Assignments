#Accept numbers of rows and number of columns from user and display below pattern
#Input : iRow = 4   ICol = 4

#Output :
# 
#                1  2  3  4
#                5  6  7  8
#                9 10 11 12


def Pattern(iRow,iCol):

    for i in range(1,iRow,1):
        for j in range(1,iCol,1):
            print(i,end=" ")

        print("\r")
            

def main():
 
    iValue1 = int(input("Enter the number of row"))
    iValue2 = int(input("Enter the number of column"))


    Pattern(iValue1,iValue2)

if __name__=="__main__":
    main()