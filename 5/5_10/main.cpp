/**
 *5.10�1�7�1�7�0�8�1�7�1�7
 * �1�7�1�7�1�7�0�6�1�7�Մ1�7�1�7�0�0�1�7�1�7�1�7�1�7�1�7�1�7�1�7�1�7�1�75.9�1�7�1�7�1�7�1�7�1�7�1�0�1�7
 */
#include <iostream>

using namespace std;
int main()
{
    string str;
    int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
    cout << "�1�7�1�7�1�7�1�7�1�7�1�7�0�5�1�7�1�7�1�7�1�7�0�0" << endl;
    cin >> str;
    for (auto i = str.begin(); i != str.end(); ++i)
    {
        switch (*i)
        {
            case 'a':
            case 'A':
                ++acnt;
                break;
            case 'e':
            case 'E':
                ++ecnt;
                break;
            case 'i':
            case 'I':
                ++icnt;
                break;
            case 'o':
            case 'O':
                ++ocnt;
                break;
            case 'u':
            case 'U':
                ++ucnt;
                break;
        }
    }
    cout << "�0�6�1�7�1�7�1�7�1�7�0�0a�0�5�1�7�1�7" << acnt << "�1�7�1�7" << endl;
    cout << "�0�6�1�7�1�7�1�7�1�7�0�0e�0�5�1�7�1�7" << ecnt << "�1�7�1�7" << endl;
    cout << "�0�6�1�7�1�7�1�7�1�7�0�0i�0�5�1�7�1�7" << icnt << "�1�7�1�7" << endl;
    cout << "�0�6�1�7�1�7�1�7�1�7�0�0o�0�5�1�7�1�7" << ocnt << "�1�7�1�7" << endl;
    cout << "�0�6�1�7�1�7�1�7�1�7�0�0u�0�5�1�7�1�7" << ucnt << "�1�7�1�7" << endl;

    return 0;
}