Action()
{
	lr_start_transaction("01_get_pets");
	
	web_rest("GET: https://demo.proficom.de/petclinicrest/pets",
		"URL=https://demo.proficom.de/petclinicrest/pets",
		"Method=GET",
		"Snapshot=t805176.inf",
		LAST);

	lr_end_transaction("01_get_pets", LR_AUTO);

	lr_start_transaction("02_get_visits");
	
	web_rest("GET: https://demo.proficom.de/petclinicrest/visits",
		"URL=https://demo.proficom.de/petclinicrest/visits",
		"Method=GET",
		"Snapshot=t34166.inf",
			LAST);

	lr_end_transaction("02_get_visits", LR_AUTO);
	
	lr_start_transaction("03_get_owners");
	
	web_rest("GET: https://demo.proficom.de/petclinicrest/owners",
		"URL=https://demo.proficom.de/petclinicrest/owners",
		"Method=GET",
		"Snapshot=t107400.inf",
		LAST);

	lr_end_transaction("03_get_owners", LR_AUTO);
	
	return 0;
}
