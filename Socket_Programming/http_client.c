/* Basic I-O libs, and standard libs */
#include <stdio.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <sys/types.h>

#include <netinet/in.h>
#include <arpa/inet.h>


int main(int argc, char *argv[]){

    //grab the address of the server from commandline argument,stored in a pointer
    char *address;
    address = argv[1];

    //create a client socket
    int client_socket;
    client_socket = socket(AF_INET, SOCK_STREAM,0);

    //connect to a address
    struct sockaddr_in remote_address;
    remote_address.sin_family = AF_INET;
    remote_address.sin_port = htons(80);
    //converts the string address to address structure required
    inet_aton(address, &remote_address.sin_addr.s_addr);

    //connect the socket to address
    connect(client_socket,(struct sockaddr *)&remote_address, sizeof(remote_address));

    /* request and response variables
     request has parameters--Method to be used(get or set method), 
    what resource we get (like root location), what protocol version, closing the request */
	char request[] = "GET / HTTP/1.1\r\n\r\n";
    char response[4096];

    //send the request as socket connection is established
     send(client_socket, request, sizeof(request),0);
     recv(client_socket, &response, sizeof(response),0);

	printf("response from the server: %s\n", response);
	close(client_socket);

    return 0;
}