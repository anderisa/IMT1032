//inheritance with Counter class
#include <iostream>
using namespace std;

class Counter {
protected:
    unsigned int count;
public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}
    unsigned int getCount() const{
        return count;
    }
};
/////////////////////////////////////////////////
class Count : public Counter {
public:
    Counter operator -- () { //create operator prefix
        return Counter(--count);
    }
    Counter operator ++ () {
        return Counter(++count);
    }
};
////////////////////////////////////////////////
int main() {
    Count cDn;
    cout << "Counter: " << cDn.getCount() << "\n";

    ++cDn; ++cDn; ++cDn;
    cout << "Counter: " << cDn.getCount() << "\n";

    --cDn;
    cout << "Counter: " << cDn.getCount() << "\n";

    return 0;
}