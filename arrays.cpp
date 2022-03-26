// #include <iostream>
// #include <string> 
// #include <array>
// using namespace std;


// const char *End{"\n"};

// int main(int argc,char **argv){

// array<int, 5> arr{1,2,3,4,5};
// for(int& x: arr) cout<<x<<' ';

// array<int,10> myarray;
// for(int i=0;i<10;i++) myarray.at(i)=i+1;
// cout<<"array contains: ";

// for(int i=0;i<10;i++) cout<<myarray.at(i)<<' ';
// array<int,3> myarray{1,2,3};
// cout<<"front is: "<<myarray.front()<<End;
// cout<<"back  is: "<<myarray.back()<<End;

// myarray.back()=50;
// for(int& x: myarray) cout<<x<<' ';

// array<int,5> myarray{1,2,3,4,5};
// cout<<"myarray contains: ";
// for(int& x: myarray) cout<<x<<' ';
// for(auto it=myarray.begin();it!=myarray.end();it++) cout<<*it<<' ';

// char *str="welcome sir";
// array<char,12> charray;
// array<int,2> iarray{1,2};
// memcpy(charray.data(),str,12);
// cout<<charray.data()<<End;
// cout<<iarray.data()<<End;

// array<int,0> first;
// array<int,5> second;
// cout<<"first "<<(first.empty()?"is empty":"is not empty")<<End;
// cout<<"second "<<(second.empty()?"is empty":"is not empty")<<End;

// array<int,5> myarray{1,2,3,4,5};
// cout<<"myarray contains: ";
// for(auto it=myarray.begin();it!=myarray.end();it++) cout<<*it<<' ';

// array<int,6> myarray;
// myarray.fill(5);
// cout<<"myarray contains: ";
// for(int& x: myarray) cout<<x<<' ';
    
// array<string,2> myarray{"welcome","sri"};
// cout<<myarray.data()<<End;
    
// array<int,10> myints;
// cout<<"size of myints: "<<myints.size()<<End;
// cout<<"max size of myints: "<<myints.max_size()<<End;

// array<int,4> myarray{1,2,3,4};
// cout<<"myarray contains: ";
// for(auto it=myarray.rbegin();it!=myarray.rend();it++) cout<<*it<<' ';
    

// array<int,5> myints;
// cout<<"size of myints: "<<myints.size()<<End;
// cout<<"sizeof(myints): "<<sizeof(myints)<<End;


// array<int,5> first{10,20,30,40,50};
// array<int,5> second{15,25,35,45,55};
// first.swap(second);
// cout<<"first: ";
// for(int& x:first) cout<<x<<' ';
// cout<<End;
// cout<<"second: ";
// for(int& x: second) cout<<x<<' ';


//     return 0;

// }