#Accept numbers of rows and number of columns from user and display below pattern
#Input : iRow = 4   ICol = 4

#Output :-    A   B   C   D
#             a   b   c   d
#             A   B   C   D
#             a   b   c   d
def Pattern(iRow,iCol):

    for i in range (iRow):
        for j in range (iCol):
            print(chr(65+i),end=" ")

        print("\r")
            

def main():
 
    iValue1 = int(input("Enter the number of row"))
    iValue2 = int(input("Enter the number of column"))


    Pattern(iValue1,iValue2)

if __name__=="__main__":
    main()