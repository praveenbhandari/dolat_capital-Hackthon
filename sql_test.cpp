#include <iostream>
#include <.libpqxx-7.6/include/pqxx/pqxx>

using namespace std;
using namespace pqxx;

int main(int argc, char *argv[])
{
    try
    {
        connection C("dbname = dolat_cap user = postgreSQL password = 12345 \
      hostaddr = localhost port = 5432");
        if (C.is_open())
        {
            cout << "Opened database successfully: " << C.dbname() << endl;
        }
        else
        {
            cout << "Can't open database" << endl;
            return 1;
        }
        C.disconnect();
    }
    catch (const std::exception &e)
    {
        cerr << e.what() << std::endl;
        return 1;
    }
}