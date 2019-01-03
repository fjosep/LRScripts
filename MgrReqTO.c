MgrReqTO()
{

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("getRequestForPersona", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/timeOffRequest/getRequestForPersona?personaId=17273&requestId=10", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("isBalanceVisible", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/balance/isBalanceVisible?personaId=17273", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getForRequest", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/ui/request-cancellation/getForRequest?requestId=10", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getPersonaBalanceForPolicy", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/balance/getPersonaBalanceForPolicy?asOfDate=2019-01-03&personaId=17273&policyId=10018", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
