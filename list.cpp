// #include <iostream>
// #include <string>
// #include <list>
// #include <vector>

// using namespace std;

// const char* End{"\n"};



// int main(int argc, char **argv){




//     return 0;
// }



// union veri{
//     enum data{a=0,b=0,c=0};
// veri(int N):n{N}{cout<<a; }
// veri(char* Str):str{Str}{}
// veri(double Literal):literal{Literal}{}

// int n;
// char* str;
// double literal;

// };

// int main(int argc,char **argv){

// veri v1(23);




//     return 0;
// }


// struct is_odd{
//     bool operator() (const int& value){
//         return (value%2==1);
//     }
// };
// int main(int argc,char **argv){

// list<int> first{1,2,3};
// list<int> second;
// for(int& x: first) cout<<x<<' ';

// first.assign(7,1);
// second.assign(first.begin(),first.end());
// int myints[]={1,2,3};
// first.assign(myints,myints+3);
// cout<<"size of first: "<<(int)first.size()<<End;
// cout<<"size of second: "<<int(second.size())<<End;

// list<int> mylist;
// mylist.push_back(10);

// while(mylist.back() !=0){

//     mylist.push_back(mylist.back()-1);
// }
// cout<<"mylist contains: "; for(int& x: mylist) cout<<x<<' ';
// int myints[]{1,2,3,4,5};
// list<int> mylist{myints,myints+5};
// cout<<"mylist contains:"; for(int& x: mylist) cout<<x<<' ';
// cout<<End;
// cout<<"Mylist contains: ";
// for(auto it=mylist.begin();it!=mylist.end();it++)
//     cout<<*it<<' ';

// list<int> mylist{5,10,15,20};

// cout<<"mylist contains: ";

// for(auto it=mylist.cbegin();it!=mylist.cend();it++) cout<<*it<<' ';
 
//  list<int> mylist; 
//  list<int>::iterator it;
//  mylist.push_back(100);
//  mylist.push_back(200);
//  mylist.push_back(300);

// cout<<"mylist contains: "; 
// for(it=mylist.begin();it!=mylist.end();it++)
// cout<<*it<<' ';

// mylist.clear();



// mylist.push_back(1);
// mylist.push_back(2);

// cout<<"mylist contains: ";
// for(it=mylist.begin();it!= mylist.end();it++)

// cout<<*it<<' ';


// list<int> mylist{1,2,4,8,16};
// cout<<"mylist backwards: ";
// for(auto rit=mylist.crbegin(); rit!= mylist.crend();rit++)
// cout<<*rit<<' ';

// list<int> mylist{1,2,4,8,16};
// cout<<"mylsit backwards: ";
// for(auto rit=mylist.crbegin();rit!= mylist.crend();rit++)
// cout<<*rit<<' ';
// list<pair<int,char>> mylist;
// mylist.emplace(mylist.begin(),100,'x');
// mylist.emplace(mylist.begin(),200,'y');
// cout<<"mylist contains: ";
// for(auto& x: mylist)
// cout<<End<<"["<<x.first<<','<<x.second<<"]";
 
// list<pair<int,char>> mylist;
// mylist.emplace_back(10,'a');
// mylist.emplace_back(20,'b');
// mylist.emplace_back(30,'c');
// cout<<"mylist contains:"; for(auto& x: mylist) cout<<End<<"("<<x.first<<','<<x.second<<")";
// list<pair<int,char>> mylist;
// mylist.emplace_front(10,'a');
// mylist.emplace_front(20,'b');
// mylist.emplace_front(30,'c');
// cout<<"mylist contains: "; for(auto& x: mylist) cout<<End<<"("<<x.first<<','<<x.second<<")";

// list<int> mylist;
// int sum(0);
// for(int i=1;i<=10;i++) mylist.push_back(i);
// while(!mylist.empty()){

//     sum +=mylist.front();
//     mylist.pop_front();
// }
// cout<<"total: "<<sum;

// int myints[]{1,2,3,4,5};
// list<int> mylist(myints,myints+5);
// list<int>::iterator it=mylist.begin();
// cout<<"Mylist contains: ";
// for(it;it!=mylist.end();it++)
// cout<<*it<<' ';

// list<int> mylist;
// list<int>::iterator it1,it2;
// for(int i=1;i<10;i++) mylist.push_back(i*10);
// it1=it2=mylist.begin();
// advance(it2,6);
// ++it1;
// cout<<"list contains: "; for(int& x: mylist) {cout<<x<<' ';} cout<<End;
// cout<<*it2<<End<<*it1;
// it1=mylist.erase(it1);
// cout<<*it1;
// it2=mylist.erase(it2);
// cout<<"list contains: "; for(int& x: mylist) {cout<<x<<' ';} cout<<End;
// cout<<*it2;
// list<int> mylist;
// mylist.push_back(77);
// mylist.push_back(22);
// mylist.front() -=mylist.back();
// cout<<"mylist.front() is now"<<mylist.front();
//  list<int> mylist;
//  int* p;
//  p=mylist.get_allocator().allocate(5);
//  for(int i=0;i<5; ++i) p[i]=i;
//  cout<<"the allocated array contains: ";
//  for(int i=0; i<5;++i) cout<<p[i]<<' ';
// mylist.get_allocator().deallocate(p,5);

// list<int> mylist;
// list<int>::iterator it;
// for(int i=1;i<=5;++i) mylist.push_back(i);
// it=mylist.begin();
// ++it;
// mylist.insert(it,10);
// mylist.insert(it,2,20);
// --it;

// vector<int> myvector(2,30);
// mylist.insert(it,myvector.begin(),myvector.end());

// cout<<"mylist contains: "; for(int& x: mylist) cout<< x<<' ';
// unsigned int i=100;
// list<int> mylist;
// if(i<mylist.max_size()) mylist.resize(i);
// else cout<<"that size exceeds the limit";

// list<double> first,second;
// first.push_back(3.3);
// first.push_back(2.2);
// first.push_back(2.3);

// second.push_back(3.8);
// second.push_back(7.7);
// second.push_back(1.1);

// first.sort();
// second.sort();

// first.merge(second);
// second.push_back(2.1);
// first.merge(second,[](double first,double second){ return (int(first)<int(second));});
// cout<<"first contains: "; for(double& x: first) cout<<x<<' ';


// int myints[]={1,2,3,3,4};
// list<int> mylist(myints,myints+5);
// mylist.remove(3);
// cout<<"mylist contains: "; for(int& x:mylist) cout<<x<<' ';


// int myints[]{1,11,111,1111,2,22,2222,222};

// list<int> mylist(myints,myints+8);
// mylist.remove_if([](const int& value){return (value<10);});
// cout<<"mylist contains: "; for(int& x: mylist) cout<<x<<' ';
// cout<<End;


// mylist.remove_if(is_odd());

// cout<<"mylist contains: "; for(int& x: mylist) cout<<x<<' ';


// list<int> mylist;
// for(int i=1;i<=5;++i) mylist.push_back(i);
// cout<<"mylist bacwards: "; for(int& x: mylist) cout<<x<<' ';

// list<int> mylist;
// for(int i=1;i<10;++i) mylist.push_back(i);
// mylist.resize(5);
// mylist.resize(8,100);
// mylist.resize(12);
// cout<<"Mylist contains: "; for(int& x: mylist) cout<<x<<' ';

// list<int> mylist;
// for(int i=1;i<10; ++i) mylist.push_back(i);

// mylist.reverse();
// cout<<"mylist contains: "; for(int& x: mylist) cout<<x<<' ';

// list<int> myints{1,2,3,4,5};

// cout<<myints.size();



//     return 0;
// }


