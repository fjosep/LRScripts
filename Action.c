Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("{url}", 
		"URL=https://{url}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("app.config.json", 
		"URL=https://{url}/assets/config/app.config.json", 
		"Resource=1", 
		"Referer=https://{url}/", 
		"Snapshot=t2.inf", 
		LAST);

	/* Request with GET method to URL "https://{url}/favicon.ico" failed during recording. Server response : 404*/

	web_add_header("Accept", 
		"*/*");

	web_custom_request("clearSession", 
		"URL=https://{url_web}/time/toa/ui/authentication/clearSession", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
