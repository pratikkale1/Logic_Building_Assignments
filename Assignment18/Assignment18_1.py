#Accept number from user and display below pattern
#Input : 5
#Output : A  B   C   D   

def Pattern(iNo):
    iCnt = 0
    ch = ord("A")
    for iCnt in range(0,iNo,1):
        print(chr(ch),end=" ")
        ch = ch+1

def main():

    iValue = int(input("Enter the number of element"))

    Pattern(iValue)

if __name__=="__main__":
    main()