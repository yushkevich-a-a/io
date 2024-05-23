#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


using namespace std; 

int main()
{
    ifstream ifile("coordinates.txt", ios::in);
    if(ifile.is_open())
    {
        string line;
        while(getline(ifile, line)) {
            stringstream ss(line);
            double lat, lon;
            ss.ignore(1);
            ss >> lat;
            ss.ignore(2);
            ss >> lon;

            if ((lat > 50 && lat < 80 ) && (lon > 20 && lon < 45 ))
            {
                cout << lat << ", " << lon << endl;
            }
        }
    }
    return 0;
}