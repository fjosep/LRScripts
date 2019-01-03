TeamTimeOff()
{

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("getPendingAndApprovedRequestsForTeams", 
		"URL=https://{url_web}/time/toa/api/teamTimeOff/getPendingAndApprovedRequestsForTeams?endDateString=9999-12-31&includeMyPolicyApproverRequests=true&startDateString=1970-01-01", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getViolateCoverageForTeams", 
		"URL=https://{url_web}/time/toa/ui/teamTimeOff/getViolateCoverageForTeams?includeMyPolicyApproverRequests=true", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getViolateBlackoutForTeams", 
		"URL=https://{url_web}/time/toa/ui/teamTimeOff/getViolateBlackoutForTeams?includeMyPolicyApproverRequests=true", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getRequestIssues", 
		"URL=https://{url_web}/time/toa/api/timeOffRequest/getRequestIssues", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
