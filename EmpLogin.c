EmpLogin()
{

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");


	web_custom_request("getCurrentUser", 
		"URL=https://{url_web}/time/toa/ui/authentication/getCurrentUser", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getSupportedLanguages", 
		"URL=https://{url_web}/time/toa/ui/locale/getSupportedLanguages", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("translations", 
		"URL=https://{url_web}/time/toa/ui/locale/translations?part=company&lang=en-US", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getMyBalances", 
		"URL=https://{url_web}/time/toa/api/balance/getMyBalances?asOfDate=2019-01-03", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("checkHasAllowancePolicy", 
		"URL=https://{url_web}/time/toa/ui/employee/checkHasAllowancePolicy", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getMyUpcoming", 
		"URL=https://{url_web}/time/toa/api/timeOffRequest/getMyUpcoming", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
