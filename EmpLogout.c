EmpLogout()
{

	web_add_header("Accept", 
		"*/*");

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("clearSession_2", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/ui/authentication/clearSession", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://toa-web-performance-automation-test.apps.mia.ulti.io/", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
