#include <iostream>
using namespace std;



int main() {
    double hours,rate,pay;
    cout<<"How many hours did your work:"<<endl;
    cin >>hours;
    cout <<"What do you make an hour?"<<endl;
    cin >>rate;
    pay= hours *rate;
    cout <<"For "<<hours<< "worked at "<<rate<< " and hour your pay is" <<pay;



    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}