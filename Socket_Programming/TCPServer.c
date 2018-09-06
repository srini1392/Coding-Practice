/* Basic I-O libs, and standard libs */
#include <stdio.h>
#include <stdlib.h>

/* Socket Libs & Net Package*/
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

/* Main Driver Program */
int main(){

    //buffer to hold the data to send to client
    char server_message[256] = "You have reached the server!!";

    //create a server socket
    int server_socket;

    /*Socket Details
    syntax: socket(domain, type of socket (tcp-sock_stream or udp),protocol specification (0 --default-tcp)) */
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    //define the server address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;

    /* bind the socket to our specified IP and port
     syntax:  bind(socket_name, cast our server address structure with correct structure type, sizeof the structure) */
    bind(server_socket,(struct sockaddr *)&server_address, sizeof(server_address));

    /* start to listen to any connections
     syntax: listen(name of socket, backlog of sockets waiting to connect (non-zero)) */
    listen(server_socket,5);

    /* client socket to accept 
    syntax: accept(socket accepting connections, struct to address of client connections, sizeof(client socket address)) */
    int client_socket;
    client_socket = accept(server_socket, NULL, NULL); //address of client connection is on same machine hence NULL

    /* send the data to client socket 
    syntax: send(client socket name, data to be sent, sizeof data, flags) */
    send(client_socket, server_message, sizeof(server_message),0);

    //close the socket
    close(server_socket);



    return 0;
}