MgrApproveTO()
{

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("approveTimeOffRequest", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/teamTimeOff/approveTimeOffRequest?requestId=10&useNewValidation=true", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://toa-web-performance-automation-test.apps.mia.ulti.io/", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json; */*");

	web_custom_request("approveTimeOffRequest_2", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/teamTimeOff/approveTimeOffRequest?requestId=10&useNewValidation=true", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://toa-web-performance-automation-test.apps.mia.ulti.io/", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		LAST);

	return 0;
}
