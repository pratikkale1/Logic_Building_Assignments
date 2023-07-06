#Accept number from user and display below pattern
#Input : 5
#Output 2 4 6 8 10

def Pattern(iNo):


    for iCnt in range(1,iNo+1,1):
        print(2*iCnt , end = " ")
        

def main():

    iValue = int(input("Enter the number of element"))

    Pattern(iValue)

if __name__=="__main__":
    main()