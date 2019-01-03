History()
{

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("getYearsByPersona", 
		"URL=https://{url_web}/time/toa/api/transactions/getYearsByPersona?personaId=17273", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getAllMyBalancePersonaPolicies", 
		"URL=https://{url_web}/time/toa/api/employee/getAllMyBalancePersonaPolicies", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("myself", 
		"URL=https://{url_web}/time/toa/api/transactions/history/myself?isAllPolicies=true&isAllTransactionTypes=true&maxResults=12&pageNumber=0&year=2019", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
