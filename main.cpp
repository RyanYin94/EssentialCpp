#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>


using namespace std;

int main() {
    /***********************  第一章部分内容 *************************/
    /***********************  第一章部分内容 *************************/
    /***********************  第一章部分内容 *************************/
    int num_arr[6] = {1, 2, 3, 4, 5, 6};
    vector<int> num_vec(num_arr, num_arr + 6);
    for(int i=0; i < num_vec.size(); ++i){
        cout << num_vec[i] << ' ';
    }
    cout << endl;
    cout << "Hello, World!" << endl;

    /*********************** vector<int> & ptr *************************/
// include <vector>
    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vector<int> vec2(10);
    vector<int> vec3(10);

    vector<int> *test[3] = {&vec1, &vec2, &vec3};
    for(int i=0;i < 3; ++i){
        for(int j=0; j < (**(test + i)).size(); ++j){
            cout << (**(test + i))[j] << ' ';
        }
        cout << endl;
    }
    /**************************** rand() ******************************/
// include <cstdlib>
    srand(88);
    for(int i=0; i < 20; ++i){
        int int_rand = rand();
        cout << int_rand % 6 << endl;
    }
    /******************* writing and reading files ********************/
// #include <fstream>
    ofstream outfile("seq_data.txt");      // 以输出模式打开seq_data.txt，
    ofstream outfile2("seq_data.txt", ios_base::app);  // 以追加模式打开seq_data.txt，不清空原有内容
//相当于python中的 open("seq_data.txt", w) as outfile:
//               open("seq_data.txt", a) as outfile2:
    return 0;
}
