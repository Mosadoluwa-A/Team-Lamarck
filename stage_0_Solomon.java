public class stage_0_Solomon {

    public static void getDistance(String x, String y){

        int hamming_distance =0;

        if(x.length()!=y.length()){
            System.out.println("Both string sizes are different");
            return;
        }

        for (int i = 0; i <x.length() ; i++) {
            if(x.charAt(i)!=y.charAt(i))
                hamming_distance++;
        }

        System.out.println(hamming_distance);

    }

    public static void main(String[] args) {
        String name = "Solomon";
        String email = "olorundaresolomonay@gmail.com";
        String slack_username = "@Solomon";
        String biostack = "Genomics";
        String twitter_handle = "@Sollyde";

       
        System.out.println(name);
        System.out.println(email);
        System.out.println(slack_username);
        System.out.println(biostack);
        System.out.println(twitter_handle);
        String x = twitter_handle;
        String y = slack_username;
        getDistance(x, y);
        
    }
}