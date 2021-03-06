MgrMyTeam()
{

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("getPayGroupsForMyTeams", 
		"URL=https://{url_web}/time/toa/ui/payGroup/getPayGroupsForMyTeams", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getChoicesByCodeForMyTeams", 
		"URL=https://{url_web}/time/toa/ui/laborMetric/getChoicesByCodeForMyTeams?code=LOCATION", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getChoicesByCodeForMyTeams_2", 
		"URL=https://{url_web}/time/toa/ui/laborMetric/getChoicesByCodeForMyTeams?code=ORGLVL1", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getChoicesByCodeForMyTeams_3", 
		"URL=https://{url_web}/time/toa/ui/laborMetric/getChoicesByCodeForMyTeams?code=ORGLVL3", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getChoicesByCodeForMyTeams_4", 
		"URL=https://{url_web}/time/toa/ui/laborMetric/getChoicesByCodeForMyTeams?code=ORGLVL4", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getChoicesByCodeForMyTeams_5", 
		"URL=https://{url_web}/time/toa/ui/laborMetric/getChoicesByCodeForMyTeams?code=ORGLVL2", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getJobChoicesForMyTeams", 
		"URL=https://{url_web}/time/toa/ui/laborMetric/getJobChoicesForMyTeams", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getOrgLevels", 
		"URL=https://{url_web}/time/toa/ui/laborMetric/getOrgLevels", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getTeamInfoInRange", 
		"URL=https://{url_web}/time/toa/ui/team/getTeamInfoInRange?endDate=2019-01-03&startDate=2019-01-03", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getTeamInfoInRange_2", 
		"URL=https://{url_web}/time/toa/ui/team/getTeamInfoInRange?endDate=2019-01-03&startDate=2019-01-03", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("getPagedTeamMembers", 
		"URL=https://{url_web}/time/toa/ui/team/getPagedTeamMembers?employeeNumberFilter=&employeeStatusFilter=ACTIVE&maxResults=16&nameFilter=&pageNumber=0&sortColumn=employee.firstNameLastName&sortDescending=false&teamId=10152", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
