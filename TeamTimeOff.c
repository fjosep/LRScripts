TeamTimeOff()
{

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("getPendingAndApprovedRequestsForTeams", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/teamTimeOff/getPendingAndApprovedRequestsForTeams?endDateString=9999-12-31&includeMyPolicyApproverRequests=true&startDateString=1970-01-01", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://toa-web-performance-automation-test.apps.mia.ulti.io/", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getViolateCoverageForTeams", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/ui/teamTimeOff/getViolateCoverageForTeams?includeMyPolicyApproverRequests=true", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://toa-web-performance-automation-test.apps.mia.ulti.io/", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getViolateBlackoutForTeams", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/ui/teamTimeOff/getViolateBlackoutForTeams?includeMyPolicyApproverRequests=true", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://toa-web-performance-automation-test.apps.mia.ulti.io/", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getRequestIssues", 
		"URL=https://toa-performance-automation-test.apps.mia.ulti.io/time/toa/api/timeOffRequest/getRequestIssues", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://toa-web-performance-automation-test.apps.mia.ulti.io/", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
