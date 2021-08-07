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

	echo $name.",";
	echo $email.",";
	echo $slack. ",";
	echo $biostack.",";
	echo $twitter. ",";

	hammingDist($slack,$twitter)
?>
