// #include <iostream>
// #include <string>
// #include <typeinfo>
// #include <set>

// using namespace std;

// const char* End{"\n"};


// typedef multiset<int>::iterator It;

// int main(){


// int myints[]{3,2,3,4,3,6};
// multiset<int> myset(myints,myints+6);
// It it=myset.begin();
// for(it;it!=myset.end();it++) 
//     cout<<*it<<' ';

// pair<It,It> ret=myset.equal_range(3);
// cout<<distance(myset.begin(),ret.first)<<" "<<*ret.second<<End;

// myset.erase(ret.first,ret.second);
// it=myset.begin();
// for(it;it!=myset.end();it++) 
//     cout<<*it<<' ';

// multiset<int> myset;
// multiset<int>::iterator it;
// myset.insert(40);
// for(int i=1;i<7;i++) myset.insert(i*10);
// it=myset.begin();
// it++;
// myset.erase(it);
// myset.erase(40);
// myset.insert(50);

// pair<It,It> ret=myset.equal_range(50);
// // cout<<"myset contains: "; for(auto It=myset.begin();It!=myset.end();It++){cout<<*It<<' ';} cout<<End;

// // cout<<*it<<End;
// myset.erase(ret.first,ret.second);
// //myset.erase(it,myset.end());
// cout<<"myset contains: "; for(it=myset.begin();it!=myset.end();it++){cout<<*it<<' ';} cout<<End;

// multiset<int> myset;
// multiset<int>::iterator it;
// for(int i=1;i<=5;i++) myset.insert(i*10);
// myset.insert(10);
// myset.insert(20);
// it=myset.find(20);
// myset.erase(it);
// myset.erase(myset.find(10));
// myset.erase(myset.find(10));
// it=myset.begin();
// for(it;it!=myset.end();it++) cout<<*it<<' ';

// multiset<int> myset;
// int* p;
// unsigned int i;
// p=myset.get_allocator().allocate(5);
// for(i=0;i<5;i++) p[i]=(i+1)*10;
// for(int i=0;i<5;i++) cout<<p[i]<<' ';

// myset.get_allocator().deallocate(p,5);
// for(int i=0;i<5;i++) cout<<p[i]<<' ';

// multiset<int> myset;
// multiset<int>::iterator it;
// for(int i=1;i<=5;i++) myset.insert(i*10);

// it=myset.insert(25);
// it=myset.insert(it,7);
// it=myset.insert(it,9);
// it=myset.insert(it,14);

// int myints[]{5,10,15};

// myset.insert(myints,myints+3);
// cout<<"Myset contains: "; for(const int& x:myset) cout<<x<<' ';

// multiset<int> myset;
// for(int i=0;i<=5;i++) myset.insert(i);

// multiset<int>::key_compare mycmp=myset.key_comp();
// int highest=*myset.rbegin();
// multiset<int>::iterator it=myset.begin();
// do{

//     cout<<*it<<' ';
// }while(mycmp(*it++,highest));


// multiset<int> myset;
// multiset<int>::iterator itlow,itup;
// for(int i=1;i<8;i++) myset.insert(i*10);
// itlow=myset.lower_bound(30);
// itup=myset.upper_bound(40);
// cout<<*itlow<<' '<<*itup;

// myset.erase(itlow,itup);
// for(const int& x: myset) cout<<x<<' ';

// multiset<int> myset;
// if(myset.max_size()>1000){
//     for(int i=0;i<1000;i++) myset.insert(i);
// }
// else cout<<"cant hold 1000 elements";

// int myints[]{1,2,3,4,5};
// multiset<int> first(myints,myints+5);
// multiset<int> second;

// second=first;
// first=multiset<int>();
// cout<<"size of first: "<< first.size()<<End;
// cout<<"size of second: "<<second.size()<<End;

// int myints[]{1,2,3,4,5};
// multiset<int> myset(myints,myints+5);
// cout<<"myset backwards:";
// auto it=myset.rbegin();
// for(it;it!=myset.rend();it++) cout<<*it<<' ';
// int myints[]{1,2,3,4,5,6};
// multiset<int> first(myints,myints+3),second(myints+3,myints+6);

// swap(first,second);

// cout<<"first contains: "; for(const int& x: first) cout<<x<<' ';
// cout<<End;
// cout<<"second contains: "; for(const int& x : second ) cout<<x<<' ';

// multiset<int> myset;
// multiset<int>::value_compare mycmp=myset.value_comp();
// for(int i=0;i<7;i++) myset.insert(i);
// cout<<"myset contains: "; 
// int highest= *myset.rbegin();
// auto it=myset.begin();
// do{
//     cout<<*it<<' ';

// }while(mycmp(*(it++),highest));


//     return 0;
// }

// int main(int argc,char **argv){
// int myints[]{1,2,3,4,5};

// multiset<int> myset(myints,myints+5);

// multiset<int>::iterator it;

// cout<<"myset contains: ";
// for(it=myset.begin();it!=myset.end();it++)
// cout<<*it<<' ';

// multiset<int> myset{10,20,30,40,50};
// cout<<"myset contains: ";
// auto it=myset.begin();
// for(it;it!=myset.end();it++)
// cout<<*it<<' ';
// multiset<int> myset{10,20,30,40,50};
// cout<<"myset contains: ";
// auto it=myset.cbegin();
// for(it;it!=myset.cend();it++)
// cout<<*it<<' ';


// multiset<int> myset;
// myset.insert(1);
// myset.insert(2);
// myset.insert(3);
// cout<<"myset contains: ";
// auto it=myset.begin();
// for(it;it!=myset.end();it++)
//     cout<<*it<<' ';
// cout<<End;
// myset.clear();
// myset.insert(200);
// myset.insert(100);

// cout<<"myset contains: ";
// it=myset.begin();
// for(it;it!=myset.end();it++)
//     cout<<*it<<' ';


// int myints[]{1,7,3,7,5,6,7};
// multiset<int> myset(myints,myints+7);
// cout<<"7 appears: "<<myset.count(7)<<" times in set"<<End;
    
// multiset<int> myset{10,20,30,40,50};

// cout<<"myset backwards: ";
// auto it=myset.crbegin();
// for(it; it!=myset.crend();it++)
//     cout<<*it<<' ';
    // multiset<int> myset{10,20,30,40,50};

    // cout<<"myset backwards: ";
    // auto it=myset.rbegin();
    // for(it;it!=myset.rend();it++)
    //     cout<<*it<<' ';

    // multiset<string> myset;
    // myset.emplace("foo");
    // myset.emplace("bar");
    // myset.emplace("foo");
    // cout<<"myset contains: ";
    // auto it=myset.begin();
    // for(it;it!=myset.end();it++) 
    //     cout<<*it<<' ';
    
// multiset<string> myset;
// auto it=myset.cbegin();
// myset.emplace_hint(it,"a");
// it=myset.emplace_hint(myset.cend(),"o");
// cout<<*it<<End;
// it=myset.emplace_hint(it,"m");
// myset.emplace_hint(it,"m");
// cout<<*it<<End;


// multiset<int> myset;
// myset.insert(10);
// myset.insert(20);
// myset.insert(30);
// cout<<"myset contains: ";
// while(!myset.empty())
// {

//     cout<<*myset.begin()<<' ';
//     myset.erase(myset.begin());
// }
// cout<<End;

// int myints[]{1,2,3,4,5};
// multiset<int> myset(myints,myints+5);
// cout<<"myset contains: ";
// auto it=myset.begin();
// for(it;it!=myset.end();it++) 
//     cout<<*it<<' ';





//     return 0;



// }