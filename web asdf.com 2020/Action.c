Action()
{
	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_start_transaction("t1");
	
	web_url("www.asdf.com", 
		"URL=https://www.asdf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("t1",LR_AUTO);

	return 0;
}