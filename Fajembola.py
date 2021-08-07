print("Name:Azeezat Fajembola")
print("E-mail: Afprish22@gmail.com")
print("biostack: Vaccine informatics")
print("SlackUserName:@Fajembola")
print("TwitterHandle:@DrPrish")

def hammDist(Str1, Str2):
    i = 0
    count = 0
 
    while(i < len(Str1)):
        if(Str1[i] != Str2[i]):
            count += 1
        i += 1
    return count
 
Str1 = "@DrPrish"
Str2 = "@Fajembola"

print(hammDist(Str1, Str2))
