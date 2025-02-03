<?php
// The number to be passed in the term parameter
$number = "01309320509"; // Replace with the actual value

// The target URL
$url = "https://llcgteam.com/courier-fraud-checker/fatch.php?api_key=504b8d54501f263420be384af344597899&term=01309320509";

// Initialize cURL
$ch = curl_init();

// Set cURL options
curl_setopt($ch, CURLOPT_URL, $url); // Set the URL
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true); // Return the response as a string
curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false); // Disable SSL verification (not recommended for production)
curl_setopt($ch, CURLOPT_TIMEOUT, 30); // Set a timeout for the request

// Execute the cURL request
$response = curl_exec($ch);

// Check for errors
if (curl_errno($ch)) {
    echo "cURL Error: " . curl_error($ch);
} else {
    // Handle the response
    echo "Response: " . $response;
}

// Close the cURL session
curl_close($ch);
?>
