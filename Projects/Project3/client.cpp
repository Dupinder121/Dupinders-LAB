#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>

using namespace std;

int main() {
    string ip;
    int prt;
    cout << "Enter server IP: ";
    cin >> ip;
    cout << "Enter server port: ";
    cin >> prt;

    int sok = socket(AF_INET, SOCK_STREAM, 0);
    if (sok < 0) {
        perror("socket");
        return 1;
    }

    sockaddr_in srv{};
    srv.sin_family = AF_INET;
    srv.sin_port = htons(prt);

    if (inet_pton(AF_INET, ip.c_str(), &srv.sin_addr) <= 0) {
        perror("inet_pton");
        close(sok);
        return 1;
    }

    if (connect(sok, (sockaddr*)&srv, sizeof(srv)) < 0) {
        perror("connect");
        close(sok);
        return 1;
    }

    string msg;
    cout << "Enter message to send: ";
    cin.ignore(); // flush newline
    getline(cin, msg);

    send(sok, msg.c_str(), msg.size(), 0);
    cout << "Message sent!" << endl;

    close(sok);
    return 0;
}
