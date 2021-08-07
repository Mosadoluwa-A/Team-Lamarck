<?php
	
	$name="Oluwatoyin Akamo";
   	$email="Oduntee@email.com";
   	$slack="@Toyincom";
   	$biostack="software development";
   	$twitter="@Teetoyin";

	function hammingDist($str1, $str2) {
		$i = 0; 
		$count = 0; 

		while(isset($str1[$i])) {
  			if($str1[$i] != $str2[$i]){
  				
  				$count++;
  			}
  			$i++;
		} 
		echo $count;
	}

	echo $name."\r\n";
	echo $email. "\r\n";
	echo $slack. "\r\n";
	echo $biostack. "\r\n";
	echo $twitter. " \r\n";

	hammingDist($slack,$twitter)
?>