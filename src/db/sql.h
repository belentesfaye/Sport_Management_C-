#include <mysqlx/xdevapi.h>
#include <memory>

using namespace std;
using namespace mysqlx;

class SQL {
    public:
        SQL();
        virtual ~SQL();

        void connect();
        void disconnect();
        void createDatabase();
        void createTable();
        void insertData(string teamName, string conference, int totalRevenue, int expenses, int netIncome);
        void selectData();
        void deleteData(string teamName);
        void updateData(string teamName, int totalRevenue, int expenses, int netIncome);
    private:
        unique_ptr<Session> session;
        unique_ptr<Schema> schema;
        unique_ptr<Table> table;
};