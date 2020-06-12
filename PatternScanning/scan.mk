a.out:scanning_server.o scanning_client.o
	gcc scanning_server.o scanning_client.o
scanning_client.o:scanning_client.c scan.h
	gcc -c scanning_client.c
scanning_server.o:scanning_server.c scan.h
	gcc -c scanning_server.c
