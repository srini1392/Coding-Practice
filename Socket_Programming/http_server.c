/* Basic I-O libs, and standard libs */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Socket Libs */
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>


//Main driver program
int main(){

    //create a file object to hold data & to read from
    FILE *html_data;

    /*file open method --
    Syntax- fopen("file-name to read","file descriptor --r--w--") */
    html_data = fopen("index.html","r");

    //response data from server
    char response_data[1024];

    /* get data using file-gets 
    syntax- fgets(data_msg, length of message, file_to_get_from_Server) */
    fgets(response_data, 1024, html_data);

    //response header for the resource requested
    char http_header[2048] = "HTTP/1.1 200 OK\r\n\n";

    //use string catenating to get both html header and data into one string
    strcat(http_header,response_data);

    //create a socket
	int server_socket;

    /* socket parameters --> domain, type of socket (tcp-sock_stream or udp), 
    protocol specification (0 --default-tcp) 
    built-in domain address, and builtin domain type for tcp*/
	server_socket = socket(AF_INET, SOCK_STREAM, 0);

	
	// define the address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(8001);
	server_address.sin_addr.s_addr = INADDR_ANY;

    //bind the address & port
	bind(server_socket, (struct sockaddr *) &server_address, sizeof(server_address));

    //listen for connections
	listen(server_socket, 5);

    //create client socket
	int client_socket;

	while(1) {
		client_socket = accept(server_socket, NULL, NULL);
		send(client_socket, http_header, sizeof(http_header), 0);
		close(client_socket);
	}
	
	return 0;
}

