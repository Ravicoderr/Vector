#include <iostream>
#include <vector>
using namespace std;
template <class t>
void display(vector<t> &v)
{
    cout << "display is called " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        cout << " ";
    }
}

int main()
{
    vector<int> vec1; // zero length integer vector
    int size, element;
    cout << "enter the size of vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the nums to store in vector ";
        cin >> element;
        vec1.push_back(element);
    }

    // display(vec1);
    // vec1.pop_back();
    cout << endl;
    vector<int>::iterator iter;
    iter = vec1.begin();
    vec1.insert(iter + 1, 2, 500); //(iterator name[+1 means first number k aage print ho] , kitni bar print krvana h , jo print krvana h)

    display(vec1);

    // following are some more eg, upper one is seperate frome these

    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('c');
    vec2.push_back('g');
    cout << endl;
    display(vec2);

    vector<char> vec3(vec2);
    cout << endl;
    display(vec3);

    vector<int> vec4(5, 10); // 5 bar 10 print hojyga
    cout << endl;
    display(vec4);

    return 0;
}