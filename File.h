#include <iostream>
#include <fstream>

using namespace std;

class File
{
private:
    ofstream writeFile;
    ifstream readFile;

public:
    void writeData(string data)
    {
        this->writeFile.open("students.txt", ios_base::app);
        this->writeFile << data << endl;
        this->writeFile.close();
    }
};