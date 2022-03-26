// #include <iostream>
// #include <string> 
// #include <bits/stdc++.h>
// #include <set>
// #include <unordered_set>
// #include <typeinfo>
// #include <list>

// using namespace std;
// const char* End{"\n"};

// int main(int argc, char** argv){
// set<int> myset{1,2,3,4,5};

// cout<<"myset contains: "; for(int x: myset) cout<<":"<<x<<' ';
// cout<<End;

// set<int> myset2{123,1234,3565,123};
// cout<<"myset contains: "; for(int x: myset2) cout<<x<<' ';


// set<int> Myset{1,2,3};
// Myset.insert(4);
// Myset.insert(5);

// Myset.erase(2);
// Myset.erase(1);
// cout<<"myset contains: "; for(int x: Myset) cout<<x<<' ';




// set<int> myset{1,2,3,4,5};
// if(myset.empty())
//     cout<<" set is empty";
// else 
//     cout<<myset.size();
// myset.clear();
// myset.insert({12,3,4});
// cout<<End;
// for(int x: myset) cout<<x<<' ';
// cout<<End;
// cout<<End;
// cout<<*(myset.find(12));

// int myints[]{1,2,3,4,5};
// set<int> myset(myints,myints+5);
// cout<<"myset contains: ";
// for(auto it=myset.begin();it!=myset.end();it++)
// cout<<*it<<' ';

// set<int> myset{1,2,3,4,5};
// cout<<"myset contains: ";
// for(auto it=myset.cbegin();it!=myset.cend();it++)
// cout<<*it<<' ';
// set<int> myset{1,2,3,4,5};
// cout<<"myst contains: ";
// for(auto it=myset.cbegin();it!=myset.cend();it++)
// cout<<*it<<' ';
// set<int> myset;
// myset.insert(100);
// myset.insert(200);
// myset.insert(300);
// cout<<"myst contains: ";
// for(auto it=myset.begin();it!=myset.end();it++)
// cout<<*it<<' ';
// myset.clear();
// myset.insert(1101);
// myset.insert(2202);
// cout<<End;
// cout<<"myset contains: ";
// for(auto it=myset.begin();it!=myset.end();it++)
// cout<<*it<<' ';
// set<int> myset;
// for(int i=1;i<5;i++) myset.insert(i*3);

// for(int i=0;i<10;++i){
// cout<<i<<":"<<(myset.count(i)!=0?"is an element of set": "is not element of set")<<End;




// }



// set<int> myset{1,2,3,4,5};
// cout<<"myset backwards: ";
// for(auto it=myset.rbegin();it!=myset.rend();it++)
// cout<<*it<<' ';
// set<string> myset;
// myset.emplace("foo");
// myset.emplace("bar");
// auto it=myset.emplace("foo");
// if(!it.second) cout<<"foo already exists";
// cout<<*it.first;
// cout<<End;
// cout<<End;
// for(string x: myset) cout<<x<<' ';

// set<string> myset;

// auto it=myset.cbegin();

// myset.emplace_hint(it,"alpha");
// it=myset.emplace_hint(myset.cend(),"omage");
// it=myset.emplace_hint(it,"epsilon");
// it=myset.emplace_hint(it,"beta");

// cout<<"myset contains: ";
// for(string x:myset) cout<<x<<' ';

// set<int> myset;
// myset.insert(20);
// myset.insert(30);
// myset.insert(10);
// // cout<<"myset contains:" ;
// // for(int x: myset) cout<<x<<' ';
// while(!myset.empty()){

//     cout<<*myset.begin()<<' ';
//     myset.erase(myset.begin());
// }
// set<int> myset;
// for(int i=1;i<=5;i++) myset.insert(i*10);

// pair<set<int>::const_iterator,set<int>::const_iterator> ret;
// ret=myset.equal_range(30);
// cout<<"the lower bound "<<*ret.first<<End;
// cout<<"the upper bound "<<*ret.second<<End;
// set<int> myset;
// set<int>::iterator it;
// for(int i=1;i<10;i++) myset.insert(i*10);
// it=myset.begin();
// ++it;
// myset.erase(it);
// myset.erase(40);

// it=myset.find(60);
// myset.erase(it,myset.end());

// for(int x:myset) cout<<x<<' ';

// set<int> myset;
// set<int>::iterator it;
// for(int i=1;i<=5;i++) myset.insert(i*10);
// it=myset.find(20);
// myset.erase(it);
// myset.erase(myset.find(40));
// cout<<"myset contains: "; for(int x: myset) cout<<x<<' ';

// set<int> myset;
// int* p;
// unsigned int i;
// p=myset.get_allocator().allocate(5);
// for(i=0;i<5;i++) p[i]=(i+1)*10;
// cout<<"the allocated array: ";
// for(i=0;i<5;i++) cout<<p[i]<<' ';
// myset.get_allocator().deallocate(p,5);

// set<int> myset;
// set<int>::iterator it;
// pair<set<int>::iterator,bool> ret;
// for(int i=1;i<=5;++i) myset.insert(i*10);
// ret=myset.insert(20);
// if(ret.second==false) it=ret.first;

// myset.insert(it,25);
// myset.insert(it,24);
// myset.insert(it,26);
// int myints[]{5,10,15};
// myset.insert(myints,myints+3);
// cout<<"myset contains: ";
// for(it=myset.begin();it!=myset.end();++it)
// cout<<*it<<' ';

// set<int> myset;
// int highest;
// set<int>::key_compare mycmp=myset.key_comp();
// for(int i=0;i<5;i++) myset.insert(i);
// highest=*myset.rbegin();
// set<int>::iterator it=myset.begin();
// do{
//     cout<<*it<<' ';
// }while(mycmp(*(++it),highest));

// set<int> myset;
// set<int>::iterator itlow,itup;

// for(int i=1;i<10;i++) myset.insert(i*10);
// itlow=myset.lower_bound(30);
// itup=myset.upper_bound(60);
// myset.erase(itlow,itup);

// int i;
// set<int> myset;
// if(myset.max_size()>1000){
//     for(i=0;i<1000;i++) myset.insert(i);
// }
// else cout<<"set cant hold 1000 elements";
// int myints[]{1,2,3,4,5};
// set<int> first(myints,myints+5);
// set<int> second;
// second=first;
// first=set<int>();
// cout<<"size of first: "<<int(first.size())<<End;
// cout<<"size of second: "<<int(second.size())<<End;

// int myints[]{1,2,3,4,5};
// set<int> myset(myints,myints+5);
// set<int>::reverse_iterator rit;
// cout<<"myset contains: ";
// for(rit=myset.rbegin();rit!=myset.rend();rit++) cout<<*rit<<' ';

// set<int> myints;
// for(int i=0;i<10;++i) myints.insert(i);
// myints.insert(100);
// myints.erase(5);
// cout<<"size of set: "<<myints.size();


// int myints[]{1,2,3,4,5,6};
// set<int> first(myints,myints+3);
// set<int> second(myints+3,myints+6);
// swap(first,second);
// for(int x: first) cout<<x<< ' ';
// cout<<End;
// for(int x: second) cout<<x<<' ';

// set<int> myset;
// set<int>::iterator itlow,itup;
// for(int i=1;i<10;i++) myset.insert(i*10);
// itlow=myset.lower_bound(30);
// itup=myset.upper_bound(60);

// myset.erase(itlow,itup);
// for(int x:myset) cout<<x<<' ';

// set<int> myset;
// set<int>::value_compare mycmp=myset.value_comp();
// for(int i=0;i<=5;i++) myset.insert(i);

// int highest = *myset.rbegin();
// set<int>::iterator it=myset.begin();
// do{
//     cout<<*it<<' ';

// }while(mycmp(*(++it),highest));



//     return 0;
// }