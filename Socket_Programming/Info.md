# Socket Programming

_Sockets_ are Low level end points used for processing information across a network.
They provide end to end connection in network amongst the devices.

Common networking protocols like HTTP,TCP-IP,UDP all sit above sockets to help in interacting with network.

## *CLIENT* Socket Workflow &nbsp;&nbsp;&nbsp; vs &nbsp;&nbsp;&nbsp;*SERVER* Socket Workflow                     
     _ _ _ _ _ _ _ _ _ _ _                                             _ _ _ _ _ _ _ _ _ _ _
    |                     |                                           |                     |
    |      socket()       |                                           |      socket()       |  
    |_ _ _ _ _ _ _ _ _ _ _|                                           |_ _ _ _ _ _ _ _ _ _ _|
            
             ||                                                                 ||
             ||                                                                 ||
            _||_                                                               _||_
            \  /                                                               \  /
             \/                                                                 \/

     _ _ _ _ _ _ _ _ _ _ _                                             _ _ _ _ _ _ _ _ _ _ _
    |                     |                                           |                     |
    |      connect()      |                                           |      bind()         |
    |_ _ _ _ _ _ _ _ _ _ _|                                           |_ _ _ _ _ _ _ _ _ _ _|

             ||                                                                 ||
             ||                                                                 ||
            _||_                                                               _||_
            \  /                                                               \  /
             \/                                                                 \/

     _ _ _ _ _ _ _ _ _ _ _                                             _ _ _ _ _ _ _ _ _ _ _
    |                     |                                           |                     |
    |       recv()        |                                           |      listen()       |
    |_ _ _ _ _ _ _ _ _ _ _|                                           |_ _ _ _ _ _ _ _ _ _ _|

                                                                                ||
                                                                                ||
                                                                               _||_
                                                                               \  /
                                                                                \/

                                                                       _ _ _ _ _ _ _ _ _ _ _
                                                                      |                     |
                                                                      |     accept()        |
                                                                      |_ _ _ _ _ _ _ _ _ _ _|