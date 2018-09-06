/* Basic I-O libs, and standard libs */
#include <stdio.h>
#include <stdlib.h>

/* Socket Libs */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>


/* Main program */
int main(){

    // create a client socket with integer descriptor
    int client_socket;

    /* socket parameters --> domain, type of socket (tcp-sock_stream or udp), 
       protocol specification (0 --default-tcp) 
       built-in domain address, and builtin domain type for tcp*/
    client_socket = socket(AF_INET,SOCK_STREAM,0);

    /* Specify the address, port of the remote socket to connect to using the AF_INET structure */
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;    //sets the family of the socket ie, domain
    server_address.sin_port = htons(9002); //converts our integer socket port into appropriate data server_address.sin_addr.s_addr = INADDR_ANY; //server address to connect to --default local machine is used here
    server_address.sin_addr.s_addr = INADDR_ANY;

    /* connect api returns an integer, Connect api syntax having parameters : -->
    client socket name, cast our client server address structure with correct structure type, size of address */
    int connection_status = connect(client_socket,(struct sockaddr *)&server_address,sizeof(server_address));

    //check for connection errors
    if (-1 == connection_status){
        printf("there was an error connecting to the remote server socket\n\n");
    }

    /* Receive the Data from Server */
    char server_response[256]; //buffer to store the data received from server

    /* receive data from the server into our client socket 
    parameters to recv(socket_name , buffer_name_to_receive, sizeof(buffer),flags) function */
    recv(client_socket, &server_response, sizeof(server_response),0);

    //print out the data received from sender to client
    printf("the server response data received is :\n%s",server_response);   

    //close the socket
    close(client_socket);
    
    return 0;
}
