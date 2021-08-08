name = "Olukorede Damilola"
email_address = "corededami@gmail.com"
slackusername = "@Korede"
biostack = "Drug development"
twitter_username = "@Coreyy"


def get_hamming_distance(s1,s2):
    count = 0

    for i in range(len(s1)):
        if s1[i] != s2[i]:
            count += 1
    return count

print(name, email_address, slackusername, biostack, twitter_username, sep = "\n")
hamming_distance = get_hamming_distance(twitter_username, slackusername)
print(hamming_distance)
