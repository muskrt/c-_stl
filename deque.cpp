// #include <iostream>
// #include <string> 
// #include <deque>
// #include <vector>

// using namespace std;
// const char* End{"\n"};
// int main (int argc,char **argv)
// {

// deque<int> first;
// deque<int> second;
// deque<int> third;
// first.assign(7,100);
// deque<int>::iterator it;
// it=first.begin()+1;
// second.assign(it,first.end()-1);
// int myints[]{1776,7,4};
// third.assign(myints,myints+3);
// for(int& x:first)cout<<x<<' ';
// cout<<End;
// for(int& x: second) cout<<x<<' ';
// cout<<End;
// for(int& x: third) cout<<x<<' ';


// deque<unsigned> mydeque;
// mydeque.resize(10);
// for(unsigned i=0;i<mydeque.size();i++) mydeque.at(i)=i;
// cout<<"my que contains: ";
// for(unsigned i=0;i<mydeque.size();i++) cout<<mydeque.at(i)<<' ';

// deque<int> mydeque;
// mydeque.push_back(10);
// while(mydeque.back() !=0)
//     mydeque.push_back(mydeque.back()-1);
// for(int& x: mydeque) cout<<x<<' ';
// cout<<End;
// for(auto it=mydeque.rbegin();it!=mydeque.rend();it++) cout<<*it<<' ';

// unsigned int i;
// deque<int> mydeque;
// mydeque.push_back(100);
// mydeque.push_back(200);
// mydeque.push_back(300);
// cout<<"mydeque contains: ";
// for(deque<int>::iterator it=mydeque.begin();it!=mydeque.end();it++) cout<<*it<<' ';

// mydeque.clear();
// mydeque.push_back(1101);
// mydeque.push_back(2202);
// cout<<End;
// cout<<"mydeque contains: ";
// for(deque<int>::iterator it=mydeque.begin();it!=mydeque.end();it++) cout<<*it<<' ';

// deque<int> mydeque{10,20,30};
// auto it=mydeque.emplace(mydeque.begin()+1,100);
// it=mydeque.emplace(it,200);
// mydeque.emplace(it,666);
// mydeque.emplace(mydeque.end(),300);
// cout<<"mydeque contains: ";
// for(int& x:mydeque) cout<<x<<' ';

// deque<int> mydeque{10,20,30};

// mydeque.emplace_back(100);
// mydeque.emplace_back(200);
// cout<<"mydeque contains: ";
// for(int& x: mydeque) cout<<x<<' ';



// deque<int> mydeque{10,20,30};
// mydeque.emplace_front(111);
// mydeque.emplace_front(222);
// cout<<"mydeque contains: ";
// for(int& x: mydeque) cout<<x<<' ';

// deque<int> mydeque;
// int sum{0};

// for(int i=1;i<=10;i++) mydeque.push_back(i);
// for(int& x: mydeque) cout<<x<<' ';
// cout<<End;
// while(!mydeque.empty()){

//     sum += mydeque.front();
//     mydeque.pop_front();
// }
// cout<<"total: "<<sum<<End;

// deque<int> mydeque;
// for(int i=1;i<=5;i++) mydeque.insert(mydeque.end(),i);
// cout<<"mydeque contains: ";
// deque<int>::iterator it=mydeque.begin();
// while(it!=mydeque.end())
//     cout<<*it++<<' ';

// deque<int> mydeque;

// for(int i=1;i<=10;i++) mydeque.push_back(i);
// mydeque.erase(mydeque.begin()+5);

// cout<<End;
// for(int& x: mydeque) cout<<x<<' ';
// mydeque.erase(mydeque.begin(),mydeque.begin()+3);

// cout<<End;
// for(int& x: mydeque) cout<<x<<' ';
// cout<<End;
// cout<<"mydeque contains: ";
// deque<int>::iterator it=mydeque.begin();
// for(it;it!=mydeque.end();it++) cout<<*it<<' ';

// deque<int> mydeque;
// int * p;
// unsigned int i;
// p=mydeque.get_allocator().allocate(5);
// for(i=0; i<5;i++)
//   mydeque.get_allocator().construct(&p[i],i);
// for(i=0;i<5;i++)
//   cout<<p[i]<<' ';

// deque<int> mydeque;
// for(int i=0;i<6;i++) mydeque.push_back(i);
// for(int& x: mydeque) cout<<x<<' ';
// cout<<End;
// deque<int>::iterator it=mydeque.begin();
// ++it;

// it=mydeque.insert(it,10);
// for(int& x: mydeque) cout<<x<<' ';
// cout<<End;
// mydeque.insert(it,2,20);
// for(int& x: mydeque) cout<<x<<' ';
// cout<<End;
// it=mydeque.begin()+2;
// vector<int> myvector(2,30);
// mydeque.insert(it,myvector.begin(),myvector.end());
// for(int& x: mydeque) cout<<x<<' ';
// cout<<End;

// long double i=5611686018427387903;
// deque<double> mydeque;
// cout<<" max size is: "<<mydeque.max_size()<<End;
// if(i<mydeque.max_size()) mydeque.resize(i);
// else cout<<"that exceeds the limit";

// deque<int> mydeque(100);
// cout<<"1. size of mydeque:  "<<mydeque.size()<<End;
// mydeque.resize(10);
// cout<<"2. size of mydeque: "<<mydeque.size();
// mydeque.shrink_to_fit();
// cout<<End<<"3. size of mydeque: "<<mydeque.size();

// deque<int> mydeque{1,2,3,4,5};

// mydeque.erase(mydeque.begin()+2,mydeque.begin()+4);

// deque<int> foo(3,100);
// deque<int> bar(5,200);
// foo.swap(bar);

// cout<<"foo is: "; for(int& x: foo) cout<<x<<' ';
// cout<<End;
// cout<<"bar is: "; for(int& x: bar) cout<<x<<' ';


 // return 0;
//}