#Accept numbers of rows and number of columns from user and display below pattern
#Input : iRow = 4   ICol = 4

#Output :-    A   B   C   D
#             A   B   C   D
#             A   B   C   D
#             A   B   C   D
def Pattern(iRaw,iCol):
    ch = ord("A")
    for i in range(iRaw):
        for j in range(65,65+iCol):
            print(chr(j),end=" ")

        print("\r")
            

def main():
 
    iValue1 = int(input("Enter the number of row"))
    iValue2 = int(input("Enter the number of column"))


    Pattern(iValue1,iValue2)

if __name__=="__main__":
    main()