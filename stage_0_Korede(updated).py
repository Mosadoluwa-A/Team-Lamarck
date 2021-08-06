name = "Olukorede Damilola"
email_address = "corededami@gmail.com"
slackusername = "@Korede"
twitter_username = "@Coreyy"
biostack = "Drug development"

def get_hamming_distance(s1,s2):
    count = 0

    for i in range(len(s1)):
        if s1[i] != s2[i]:
            count += 1
    return count

print(name, email_address, slackusername,twitter_username, biostack, sep = "\n")
hamming_distance = get_hamming_distance(twitter_username, slackusername)
print(hamming_distance)
