#Accept number from user and display below pattern
#Input : 5
#Output :5  4   3   2   1

def Pattern(iNo):


    for iCnt in range(iNo,0,-1):
        print(iCnt , "#" ,end = " ")


def main():

    iValue = int(input("Enter the number of element"))

    Pattern(iValue)

if __name__=="__main__":
    main()