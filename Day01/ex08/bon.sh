ldapsearch -Q "(cn=*bon*)" | grep "numEntries: " |sed 's/.* //'
