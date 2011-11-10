#include <iostream>
#include <vector>
#include <list>

using namespace std;

void add_reservation();
//void cancel_reservation(const int, bool[]);
vector<int> available_seats(const int);

const int SIZE = 50;
bool seatTaken[SIZE];
list<int> res_numbers;

int main()
{

    while(true)
    {
        char input;
        cout << "(a) Add reservation" << endl;
        cout << "(c) Cancel reservation" << endl;
        cin >> input;

        if(input == 'a')
        {
            add_reservation();
        }

        else if(input == 'c')
        {

        }
        else
        {
            cout << "Input not recognised\n" << endl;
        }

    }
}

void add_reservation()
{
    int seats;
    cout << "How many seats?" << endl;

    cin >> seats;

    vector<int> freeSeats = available_seats(seats);

    if(freeSeats.size() == 0)
    {
        //Error
    }
    else
    {
        cout << "\n\nSeats reserved" <<endl;
        for(vector<int>::iterator it = freeSeats.begin(); it!=freeSeats.end(); ++it)
        {
            seatTaken[*it] = true;
            cout << *it;
        }

        int resNum = 0;
        res_numbers.sort();

        for(list<int>::iterator it = res_numbers.begin(); it!=res_numbers.end(); ++it)
        {
            if(resNum == *it)
            {
                resNum++;
            }
            else
            {
                break;
            }
        }

        res_numbers.push_back(resNum);

        cout << "\n\nReservation number: " resNum << endl;

    }

}

//void cancel_reservation()
//{
//
//}
//
vector<int> available_seats(const int limit)
{
    vector<int> freeSeats;
    int count = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(seatTaken[i] == false)
        {
            freeSeats.push_back(i);
            count++;
        }

        if(count == limit)
        {
            return freeSeats;
        }
    }

    freeSeats.clear();
    return freeSeats;

}


















