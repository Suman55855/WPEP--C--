#include <iostream>
#include <string>
using namespace std;

class Profile
{
private:
    int followers;

public:
    Profile(int count) : followers(count) {}

    void following()
    {
        if (followers > 1000)
        {
            cout << "Influencer has large followers" << endl;
        }
        else
        {
            cout << "Influencer has moderate followers" << endl;
        }
    }
};

int main()
{

    int followerCount = 500;

    Profile ProfileObj(followerCount);

    ProfileObj.following();

    return 0;
}