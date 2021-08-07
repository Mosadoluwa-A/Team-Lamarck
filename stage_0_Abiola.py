
name = "Abiola Fagbamigbe"
email = "abiolaelizabeth2016@gmail.com"
slack_username = "@Abiola"
twitter_handle = "@lizzya"

def hammD(su,th):
	hd = 0
	for i in range(len(su)):
		if su[i] != th[i]:
			hd += 1
	return hd

hamming_distance = hammD(slack_username, twitter_handle)

print(name,email,slack_username,twitter_handle,hamming_distance, sep="\n")