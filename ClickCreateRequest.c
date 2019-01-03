ClickCreateRequest()
{

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("getMyRequestPolicies", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/employee/getMyRequestPolicies?endDate=9999-12-31&startDate=2019-01-03", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getMyTimeZone", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/employee/getMyTimeZone?asOfDate=2019-01-03", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getMyRequestPolicies_2", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/employee/getMyRequestPolicies?endDate=2019-01-03&startDate=2019-01-03", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("validateRequest", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/ui/timeOffRequest/validateRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getMyBalanceForPolicy", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/balance/getMyBalanceForPolicy?asOfDate=2019-01-03&policyId=10018", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
