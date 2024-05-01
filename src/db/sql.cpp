#include "sql.h"

SQL::SQL() {
    session = make_unique<Session>("mysqlx://localhost:33060");
}

SQL::~SQL() {
    disconnect();
}

void SQL::connectToDatabase(const string& host, int port, const string& user, const string& password) {
    try {
        SessionSettings settings("mysqlx://"+user+":"+password+"@"+host+":"+to_string(port));
        session = make_unique<Session>(settings);
    } catch (const Error &err) {
        cout << "Error: " << err << endl;
    }
}