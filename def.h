#define clients_array 2 //number of clients in bank you can adjust it as you want
//structure of client
typedef struct
 {
     int id;
     double cash;
     char name[30];
     char type [7];
 }client;
void add_client(client *ptr);
void edit_client(client *ptr);
void print_client(client *ptr);
void delete_client(client *ptr);
void trans_money(client *ptr);

