// #include <iostream> 
// #include <string> 
// #include <sstream>
// #include <forward_list>
// #include <array>

// using namespace std;
// const char* End{"\n"};

// int main(int argc, char **argv){


// forward_list<int> first;
// forward_list<int> second;
// first.assign(4,15);

// second.assign(first.begin(),first.end());
// first.assign({1,2,3});

// cout<<"First contains: "; for(int& x: first) cout<<x<<' ';
// cout<<End;
// cout<<"Second contains: "; for(int& x: second) cout<<x<<' ';
// cout<<End;


// forward_list<int> mylist{20,30,40,50};
// mylist.insert_after(mylist.before_begin(),11);
// for(int& x: mylist) cout<<x<<' ';

// forward_list<int> mylist2{1,2,3,4};
// cout<<End;
// cout<<"mylist contains: "; for(auto it=mylist2.begin();it!=mylist2.end();++it) cout<<*it<<' ';
// forward_list<int> mylist{1,2,3,4};
// cout<<"mylist contains: "; for(auto it=mylist.begin(); it!=mylist.end();++it) cout<<*it<<' ';

// forward_list<int>  mylist{1,2,3};
// mylist.insert_after(mylist.cbefore_begin(),19);
// cout<<"mylist contains: "; for(int& x: mylist) cout<<x<<' ';
// cout<<End;
// for(auto it=mylist.cbegin(); it!=mylist.cend();++it) cout<<*it<<' ';
// forward_list<int> mylist{1,2,3};
// cout<<"myarray containts: "; for(auto it=mylist.cbegin();it!=mylist.end();it++) cout<<*it<<' ';

// forward_list<int> mylist{10,20,30};
// cout<<"mylist contains: "; for(int& x: mylist) cout<<x<<' ';

// mylist.clear();
// cout<<End;

// mylist.insert_after(mylist.before_begin(),{100,200});
// cout<<"mylist contains: ";for(int& x: mylist) cout<<x<<' ';

// forward_list<pair<int,char>> mylist;
// auto it=mylist.before_begin();
// it=mylist.emplace_after(it,100,'x');
// it=mylist.emplace_after(it,200,'y');
// it=mylist.emplace_after(it,300,'z');
// cout<<"mylist contains: ";
// for(pair<int,char>& x: mylist)
// cout<<End<<"["<<x.first<<","<<x.second<<"]";

// forward_list<pair<int,char>> mylist;
// mylist.emplace_front(10,'a');
// mylist.emplace_front(20,'b');
// mylist.emplace_front(30,'c');
// cout<<"mylist contains: ";
// for(auto& x:mylist) cout<<End<<"["<<x.first<<","<<x.second<<"]";
// forward_list<int> first;
// forward_list<int> second{20,40,80};

// cout<<"first "<<(first.empty()?"is emptry": "is not empty")<<End;
// cout<<"second  "<<(second.empty()?"is emptry": "is not empty")<<End;
// forward_list<int> mylist{10,20,30,40,};
// cout<<"mylist contains: "; for(auto it=mylist.begin();it!=mylist.end();it++) cout<<*it<<' ';

// forward_list<int> mylist{10,20,30,40,50};
// auto it=mylist.begin();
// it=mylist.erase_after(it);
// cout<<*it<<End;
// it=mylist.erase_after(it,mylist.end());
// mylist.erase_after(mylist.before_begin());
// cout<<"mylist contains: "; for(int& x: mylist) cout<<x<<' ';

// forward_list<int> first;
// forward_list<int> second(3,7);
// forward_list<int> third(second.begin(),second.end());
// forward_list<int> fourth(third);
// forward_list<int> fifth(move(fourth));
// forward_list<int> sixth{1,2,3,4};
// cout<<End<<"First: "; for(int& x: first) cout<<x<<' '; 
// cout<<End<<"second: "; for(int& x: second) cout<<x<<' '; 
// cout<<End<<"third: "; for(int& x: third) cout<<x<<' '; 
// cout<<End<<"fourth: "; for(int& x: fourth) cout<<x<<' '; 
// cout<<End<<"fifth: "; for(int& x: fifth) cout<<x<<' '; 
// cout<<End<<"sixth: "; for(int& x: sixth) cout<<x<<' '; 

// forward_list<int> mylist{1,2,3};
// mylist.front()=11;
// for(int& x: mylist) cout<<x<<' ';


// array<int,3> myarray{11,22,33};
// forward_list<int> mylist;
// forward_list<int>::iterator it;
// it=mylist.insert_after(mylist.before_begin(),10 );

// it=mylist.insert_after(it,2,20);
// cout<<"mylist contains: "; for(int& x: mylist) {cout<<x<<' ';} cout<<End;
// it=mylist.insert_after(it,myarray.begin(),myarray.end());
// cout<<"mylist contains: "; for(int& x: mylist) {cout<<x<<' ';} cout<<End;
// it=mylist.begin();
// it=mylist.insert_after(it,{1,2,2});

// cout<<"mylist contains: "; for(int& x: mylist) {cout<<x<<' ';} cout<<End;


// int myint;
// string mystring;
// forward_list<int> mylist;
// cout<<"Enter size: ";
// getline(cin,mystring);
// stringstream(mystring) >>myint;
// cout<<mylist.max_size()<<End;
// if(myint<=mylist.max_size()) mylist.resize(myint);
// else cout<<"That size exceeds the maximum";


// forward_list<double> first{4.2,2.9,3.1};
// forward_list<double> second{1.4,7.7,3.1};
// forward_list<double> third{6.2,3.7,7.1};
// first.sort();
// second.sort();
// first.merge(second);
// cout<<"first contains: "; for(double& x:first) {cout<<x<<' ';} cout<<End;
// first.sort(greater<double> ());
// third.sort(greater<double>());
// first.merge(third,greater<double>());

// cout<<"first contains: "; for(double& x:first) {cout<<x<<' ';} cout<<End;

// cout<<"third contains: "; for(double& x:third) {cout<<x<<' ';} cout<<End;
//    return 0;
//}

// #include <iostream>
// #include <string>
// #include <forward_list>

// using namespace  std;
// const char* End{"\n"};

// template<class Contanier>
// Contanier by_two(const Contanier& x){
// Contanier temp(x);
// for(auto& x:temp) {x*=2; }
// return temp;
// }

// int main(int argc, char **argv){
// forward_list<int> first(4);
// forward_list<int> second(3,5);

// for(int& x: first) {cout<<x<<' '; } cout<<End;
// for(int& x: second){cout<<x<<' ';} cout<<End;

// first=second;
// for(int& x: first) {cout<<x<<' '; } cout<<End;
// second=by_two(first);

// for(int& x: second){cout<<x<<' ';} cout<<End;

//     return 0;
// }


// #include <iostream>
// #include <string> 
// #include <forward_list>
// #include <functional>
// const char* End{"\n"};
// using namespace std;
// bool single_digit(const int& value){ return (value%2==1);}
// int main(int argc, char **argv){

// // forward_list<int> mylist{10,20,30,40};
// // cout<<"poping out the elements in mylist";
// // while(!mylist.empty()){

// //     cout<<' '<<mylist.front();
// //     mylist.pop_front();
// // }

// // forward_list<int> mylist{1,2,3};
// // mylist.push_front(5);
// // mylist.push_front(7);

// // cout<<"mylist contains: "; for(int& x: mylist) cout<< x<<' ';

// // forward_list<int> mylist{10,20,30,30,20,10};
// // mylist.remove(20);
// // cout<<"mmylist contains: "; for(int& x: mylist) {cout<<x<<' ';}cout<<End;


// // class is_odd_class{
// //     public: 
// // bool operator() (const int& value){
// //     return (value%2==1);
// // }
// // }is_odd_object;

// // forward_list<int> mylist{1,2,3,4,5,6,7};
// // mylist.remove_if( [&](const int& value){return value%2==1;} );
// // //mylist.remove_if(is_odd_object);

// // for(int& x: mylist) cout<<x<<' ';

// // forward_list<int> mylist{10,20,30,40,50};
// // mylist.resize(3);
// // mylist.resize(5,100);
// // cout<<"mylist contains: "; for(int& x: mylist) cout<<x<<' ';
// // forward_list<int> mylist{10,20,30,40};
// // mylist.reverse();
// // cout<<"mylist contains: "; for(int& x: mylist) cout<<x<<' ';

// // forward_list<int> mylist{2,1,5,4,9,6,1};
// // mylist.reverse();
// // for(int& x : mylist) {cout<<x<<' ';} cout<<End;
// // mylist.sort();
// // cout<<"default sort (operator) ";
// // for(int& x : mylist) {cout<<x<<' ';} cout<<End;
// // mylist.sort(greater<int>());
// // for(int& x: mylist) {cout<<x<<' ';} cout<<End;

// // forward_list<int> first{1,2,3};
// // forward_list<int> second{10,20,30};


// // auto it=first.begin();

// // first.splice_after(first.before_begin(),second);
// // cout<<"first contains: "; for(int& x: first){cout<<x<<' ';} cout<<End;

// // second.splice_after(second.before_begin(),first,first.begin(),it);
// // cout<<"second contains: "; for(int& x: second){cout<<x<<' ';} cout<<End;

// // first.splice_after(first.before_begin(),second,second.begin());
// // cout<<"first contains: "; for(int& x: first){cout<<x<<' ';} cout<<End;

// // forward_list<int> first{10,20,30};
// // forward_list<int> second{100,200};
// // forward_list<int>::iterator it;
// // first.swap(second);
// // cout<<"first contains: "; for(int& x: first) cout<<x<<' ';
// // cout<<"second contanis: ";for(int& x: second) cout<<x<<' ';




//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <forward_list>
// #include <cmath>

// using namespace std;
// const char* End{"\n"};
// bool same_integral_part(double first,double second){

//     return (int(first)==int(second));
// }

// class is_near{
//     public:
//     bool operator()(double first,double second){


//         return (fabs(first-second)<5.0);
//     }
// }is_near_object;
// int main(int argc, char **argv){

// forward_list<double> mylist{1.2, 3.0, 3.1, 1.5, 9.5, 7.0, 3.0, 1.2, 1.5, 8.5};

// mylist.sort();
// cout<<"mylist: "; for(double& x: mylist) {cout<<x<<' ';} cout<<End;
// // mylist.unique();
// // cout<<"mylist: "; for(double& x: mylist) {cout<<x<<' ';} cout<<End;

// // mylist.unique(same_integral_part);
// // cout<<"mylist: "; for(double& x: mylist) {cout<<x<<' ';} cout<<End;

// mylist.unique(is_near_object);
// cout<<"mylist: "; for(double& x: mylist) {cout<<x<<' ';} cout<<End;



//     return 0;
// }

