SubmitTORequest()
{

	web_add_header("Accept", 
		"*/*");

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("create", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/timeOffRequest/create", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
