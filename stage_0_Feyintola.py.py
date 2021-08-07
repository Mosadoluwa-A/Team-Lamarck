full_name = 'Firdaous Wuraola Olaoniye'
email = 'feyintolaolaoniye@gmail.com'
slack_username = '@Feyintola'
biostack = 'Data analysis'
twitter_handle = 'Feyintola_'

def hammingDistance(str1,str2):
    for s in range(len(str1)):
        if str1[s] != str2[s]:
            s += 1
    return s

hamming_distance = hammingDistance(slack_username, twitter_handle)

print(full_name, email, slack_username, biostack,
      twitter_handle, hamming_distance, sep="\n")
    
        
