#Accept number from user and display below pattern
#Input : 5
#Output 1   *   2   *   3   *   4   *   5   *

def Pattern(iNo):


    for iCnt in range(1,iNo+1,1):
        print(iCnt , "*" ,end = " ")


def main():

    iValue = int(input("Enter the number of element"))

    Pattern(iValue)

if __name__=="__main__":
    main()