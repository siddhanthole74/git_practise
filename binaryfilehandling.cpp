// #include <iostream>
// #include <fstream>

// using namespace std;

// class cricket
// {
//     char pnm[25];
//     int run, inn;
//     float avg;

// public:
//     void playinfo()
//     {
//         cout << "Name ,Runs , Innings :";
//         cin >> pnm >> run >> inn;
//     }

//     void showavg()
//     {
//         avg = (float)(run / inn);
//         cout << pnm << "\t Acg Runs:" << avg << endl;
//     }
// };

// int main()
// {
//     cricket ct;
//     fstream fs;
//     char dec;
//     int b , r;

//     fs.open("play.dat" , ios::out | ios::binary);

//     do
//     {
//         ct.playinfo();
//         fs.write((char *)&ct, sizeof(ct));

//         cout << "\nRepeat?";
//         cin >> dec;

//     } while (dec == 'y' || dec == 'Y');

//     fs.close();

//     fs.open("play.dat" , ios::in | ios::binary);

//     while (fs)
//     {
//         fs.read((char *)&ct, sizeof(ct));

//         if (fs.eof() == 0)
//         {
//             ct.showavg();
//         }
//     }
//     fs.close();

//     fs.open("play.dat", ios::in | ios::binary);

//     cout << "\nRecord No:?";

//     cin >> r;

//     b = (r - 1) * sizeof(ct);

//     cout << "\nbyte:" << b << endl;

//     fs.seekp(b);

//     fs.read((char *)&ct, sizeof(ct));

//     ct.showavg();

//     fs.close();

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    cout<<"hiii";
}