#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

class MyCalendar
{
    map<int, int> bookings; // we have created a simple map inplace of unordered map bcoz it makes the data sorted and unique

public:
    MyCalendar()
    {
    }

    bool book(int start, int end)
    {
        if (bookings.empty()) // base case if the bookings is intially empty
        {
            bookings.insert(pair<int, int>(start, end)); // or it could be bookings.insert({start,end});
            return true;
        }
        if (bookings.find(start) == bookings.end()) // normal syntax to find the value in a map
        // also it means start is not present earlier in the map
        {
            auto next = bookings.upper_bound(start); // gives the immidiate greater element's iterator than "start"
            auto prev = next;
            prev--;                     // the just before or lesser element's iterator
            if (next == bookings.end()) // if the iterator does not exist
            {
                auto last = bookings.rbegin(); // it gives the iterator of the last element in the map
                if (start < (*last).second)    // checking if the end of the last element of the map is greater than the start that means we can not add it to our queue so we will return false
                    return false;
            }
            else if (next == bookings.begin()) // if the element is the starting of the map
            {
                if (end > (*next).first) // checking if "end" is greater than the next iterator's start value
                    return false;        // if the end is smaller than the start of next job then it could be true only
            }
            else if ((start < (*prev).second) || (end > (*next).first)) // Also if the "start" is smaller than the previous job's end time
                                                                        // or the "end" is greater than next job's (which has just greater start value) start
                return false;

            bookings.insert(pair<int, int>(start, end)); // if nothing of above conditions got selected means it could fit in our calender
            return true;                                 // and here we return true that the given element is selected
        }

        return false; // if niether the map is empty nor the start is unavailable from the map
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */