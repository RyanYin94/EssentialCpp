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
// 写入对象  ofstream
// 读取对象  ifstream
    ofstream outfile("seq_data.txt");      // 以输出模式打开seq_data.txt，
//    ofstream outfile2("seq_data.txt", ios_base::app);  // 以追加模式打开seq_data.txt，不清空原有内容
//相当于python中的 open("seq_data.txt", w) as outfile:
//               open("seq_data.txt", a) as outfile2:
    if(!outfile){
        cerr << "Unable to open the file" << endl;
    }else{
        outfile << "Bob" << ' '
                << 10 << ' '
                << 4 << endl;
        outfile << "Ryan" << ' '
                << 10 << ' '
                << 9 << endl;
//在outfile中写入一些内容
    }
//    以读取模式打开文件  并将对象命名为readfile
    ifstream readfile("seq_data.txt");
    if(!readfile){
        cerr << "Unable  to open the file" << endl;
    }else{
        string name;
        int a;
        int b;
        while(readfile >> name){
            readfile >> a >> b;
            cout << name << endl;
            cout << a << endl;
            cout << b << endl;
        }
    }
    /******************* exercise 1.5 ********************/
//    string username;
//    cout << "enter your name:";
//    cin >> username;
//    switch(username.size()){
//        case 0:
//            cout << "enter a name,please" << endl;
//            break;
//        case 1:
//            cout << "too short" << endl;
//            break;
//        default:
//            cout << "hello," << username << endl;
//            break;
//    }
    /******************* exercise 1.6 ********************/
//    vector<int> vec1_6;
//    int num1_6;
//    int sum1_6 = 0;
//    while(cin >> num1_6){
//        vec1_6.push_back(num1_6);
//    }
//    for(int i=0; i < vec1_6.size(); ++i){
//        sum1_6 += vec1_6[i];
//    }
//    cout << "sum: " << sum1_6 << endl;
//    cout << "average: " << sum1_6 / vec1_6.size() << endl;
    /******************* exercise 1.7 ********************/
//    ofstream file1_7write("file1_7.txt");
//    if(file1_7write){
//        file1_7write << "this is the exercise 1.7." << endl;
//        file1_7write << "this is the line2." << endl;
//        file1_7write << "this is the last line." << endl;
//    }
//    vector<string> vecstr1_7;
//    string str1_7;
//    ifstream file1_7read("file1_7.txt");
//    if(file1_7read){
//        while(file1_7read >> str1_7){
//            vecstr1_7.push_back(str1_7);
//        }
//    }
//    for(int i=0; i < vecstr1_7.size(); ++i){
//        cout << vecstr1_7[i] << ' ';
//    }
//    cout << endl;
//    sort(vecstr1_7.begin(), vecstr1_7.end());
//    for(int i=0; i < vecstr1_7.size(); ++i){
//        cout << vecstr1_7[i] << ' ';
//    }
    /******************* exercise 1.8 ********************/
//    const char* msg2user(int num){
//        static const char* msg[] = {
//                "0 line",
//                "1 line",
//                "2 line"
//        };
//        return msg[num];
//    }
//    cout << msg2user(1) << endl;
/***********************  第二章部分内容 *************************/
/***********************  第二章部分内容 *************************/
/***********************  第二章部分内容 *************************/

    return 0;
}
