insatll.packages("stringdist")

library(stringdist)
personal_info <- function(){
  name = "Bright Yemi Kwabena"
  email = "brightyemi23@gmail.com"
  slack_username = "@kwabena"
  twitter_handle = "@kwabenaficent"
  biostack = "Human Genetics !!!"
  
  cat(paste('',"Name:",name,'\n',
            "Email:",email,'\n',
            'Slack_userName:',slack_username,'\n',
            'Biostack:',biostack,'\n',
            'Twitter_handle:',twitter_handle,'\n'))
  
  #Hamming-distance
 
  slack_username <-  as.character("@kwabena")
  twitter_handle <-  as.character("@kwabenaficent")
  
  hmd <- stringdist(slack_username, twitter_handle, method = "hamming")
  cat(paste('','Hamming_Distance:',hmd))
  
  }
personal_info()
