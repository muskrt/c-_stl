// #include <iostream>
// #include <string>
// #include <map>
// #include <typeinfo>
// using namespace std;

// const char* End{"\n"};

// int main(int argc,char **argv){



// multimap<int,char> mymap{{1,'a'},{2,'b'}}; 
// for(auto& x:mymap) cout<<x.first<<"=>"<<x.second<<End;

// int myarray[3][2]={{1,2},{3,4},{5,6}};
// int ** p{nullptr};
// p=new int*[2];
// p[0][0]=myarray[0][0];
// cout<<p[0][1];
// char a;
// cin>>a;
// multimap<char,int> mymap;
// mymap.insert(pair<char,int>('a',1));
// mymap.insert(pair<char,int>('b',2));
// mymap.insert(pair<char,int>('c',3));
// mymap.insert(pair<char,int>('a',4));
// for(pair<char,int> x: mymap) cout<<x.first<<"=>"<<x.second<<End;


// multimap<char,int> mymap;
// multimap<char,int>::iterator it;
// mymap.insert(pair<char,int>('b',1));
// mymap.insert(pair<char,int>('b',2));
// mymap.insert(pair<char,int>('q',3));

// cout<<"mymap contains: ";
// for(pair<char,int> x: mymap) cout<<x.first<<"=>"<<x.second<<End;

// mymap.clear();

// mymap.insert(pair<char,int> ('a',11));
// mymap.insert(pair<char,int> ('x',22));
// cout<<"mymap contains: "<<End;
// for(pair<char,int> x:mymap) cout<<x.first<<"=>"<<x.second<<End;

// multimap<char,int> mymap;

// mymap.insert(make_pair('y',1));
// mymap.insert(make_pair('y',20));
// mymap.insert(make_pair('y',15));
// mymap.insert(make_pair('x',5));
// mymap.insert(make_pair('z',25));
// mymap.insert(make_pair('z',30));
// cout<<"mymap contains: "<<End;
// for(pair<char,int> x: mymap) cout<<x.first<<"=>"<<x.second<<End;

// for(char c='x';c<='z';c++){
//     cout<<"there are "<<mymap.count(c)<<" elements with key"<<c<<" : ";
//     multimap<char,int>::iterator it;
//     for (it=mymap.equal_range(c).first;it!=mymap.equal_range(c).second; ++it)

//     {
//         cout<<(*it).second<<' ';
//     }
//     cout<<End;
// }

// multimap<string,float> mymap;
// mymap.emplace("a",1.5);
// mymap.emplace("c",2.1);
// mymap.emplace("a",1.4);
// for(pair<string,float> x: mymap) cout<<x.first<<"=>"<<x.second<<End;

// multimap<string,int> mymap;
// auto it=mymap.end();
// it=mymap.emplace_hint(it,"foo",10);
// mymap.emplace_hint(it,"bar",20);
// mymap.emplace_hint(mymap.end(),"foo",30);

// for(pair<string,int> x: mymap) cout<<x.first<<"=>"<<x.second<<End;


// multimap<char,int> mymap;
// mymap.insert(pair<char,int>('b',1));
// mymap.insert(pair<char,int>('b',2));
// mymap.insert(pair<char,int>('q',5));
// while(!mymap.empty()){
//     cout<<mymap.begin()->first<<"=>"<<mymap.begin()->second<<End;
//     mymap.erase(mymap.begin());
// }

// multimap<char,int> mymap;
// mymap.insert(pair<char,int> ('a',1));
// mymap.insert(pair<char,int>('b',2));
// mymap.insert(pair<char,int>('b',3));
// mymap.insert(pair<char,int>('b',4));
// mymap.insert(pair<char,int>('c',5));
// mymap.insert(pair<char,int>('c',6));
// mymap.insert(pair<char,int>('d',6));

// for(char ch='a'; ch<='d';ch++){

//     pair<multimap<char,int>::iterator,
//     multimap<char,int>::iterator> ret;
//     ret=mymap.equal_range(ch);
//     cout<<ch<<"=>";
//     for(auto it=ret.first;it!=ret.second;it++)
//         cout<<(*it).second<<' ';
//     cout<<End;
// }
// multimap<char,int> mymap;
// mymap.insert(pair<char,int>('a',1));
// mymap.insert(pair<char,int>('b',2));
// mymap.insert(pair<char,int>('b',3));
// mymap.insert(pair<char,int>('c',4));
// mymap.insert(pair<char,int>('d',5));
// mymap.insert(pair<char,int>('d',6));
// mymap.insert(pair<char,int>('e',7));
// mymap.insert(pair<char,int>('f',8));
// multimap<char,int>::iterator it=mymap.find('b');
// mymap.erase(it);
// mymap.erase('d');
// it=mymap.find('e');
// mymap.erase(it,mymap.end());

// for(it=mymap.begin();it!=mymap.end();it++)
// cout<<it->first<<"=>"<<it->second<<End;
// multimap<char,int> mymap;


// mymap.insert(make_pair('x',1));
// mymap.insert(make_pair('y',2));
// mymap.insert(make_pair('z',3));
// mymap.insert(make_pair('z',4));

// multimap<char,int>::iterator it=mymap.find('x');
// mymap.erase(it);
// mymap.erase(mymap.find('z'));
// cout<<"elements in map: "<<End;
// cout<<"y => "<<mymap.find('y')->second<<End;
// cout<<"z => "<<mymap.find('z')->second<<End;

// multimap<char,int> mymap;
// multimap<char,int>::iterator it;

// mymap.insert(pair<char,int>('a',1));
// mymap.insert(pair<char,int>('z',10));
// it=mymap.insert(pair<char,int>('b',2));

// mymap.insert(it,pair<char,int>('c',3));
// mymap.insert(it,pair<char,int>('z',4));


// multimap<char,int> anothermap;
// anothermap.insert(mymap.begin(),mymap.find('c'));

// cout<<"mymap contains: "<<End;
// for(pair<char,int> x: mymap) cout<<x.first<<"=>"<<x.second<<End;

// cout<<End;
// cout<<"another map contains: "<<End;
// for(pair<char,int> x:anothermap) cout<<x.first<<"=>"<<x.second<<End;
    
    
    // multimap<char,int> mymap;
    // multimap<char,int>::key_compare mycmp   =mymap.key_comp();

    // mymap.insert(make_pair('a',100));
    // mymap.insert(make_pair('b',200));
    // mymap.insert(make_pair('b',211));
    // mymap.insert(make_pair('c',300));
    // char highest=mymap.rbegin()->first;
    // multimap<char,int>::iterator it=mymap.begin();

    // do{

    //     cout<<it->first<<"=>"<<it->second<<End;
    // }while(mycmp((*it++).first,highest));

    // multimap<char,int> mymap;
    // multimap<char,int>::iterator it,itlow,itup;

    // mymap.insert(make_pair('a',1));
    // mymap.insert(make_pair('b',2));
    // mymap.insert(make_pair('c',10));
    // mymap.insert(make_pair('c',200));
    // mymap.insert(make_pair('d',111));
    // mymap.insert(make_pair('e',4));
    // itlow=mymap.lower_bound('b');
    // itup=mymap.upper_bound('d');

    // for(it=itlow;it!=itup;it++)
    //     cout<<it->first<<"=>"<<it->second<<End;

// multimap<int,int> mymap;
// if(mymap.max_size()>=1000u){
//     for (int i = 0; i < 1000; i++)
//     {
//         mymap.insert(make_pair(i,0));
//     }  
// }
// else cout<<"cant hold 1000 values";

// multimap<char,int> mymap;
// mymap.insert(make_pair('x',1));
// mymap.insert(make_pair('y',2));
// mymap.insert(make_pair('y',3));
// mymap.insert(make_pair('z',5));
// cout<<"mymap size is: "<<mymap.size();



// multimap<char,int> foo,bar ;
// foo.insert(make_pair('x',1));
// foo.insert(make_pair('y',2));
// bar.insert(make_pair('a',11));
// bar.insert(make_pair('a',22));
// bar.insert(make_pair('a',33));
// swap(foo,bar);

// cout<<"foo is: "<<End; for(auto x: foo) cout<<x.first<<">"<<x.second<<End;
// cout<<End;
// cout<<"bar is: "<<End; for(auto x: bar) cout<<x.first<<">"<<x.second<<End;

// multimap<char,int> mymap;
// multimap<char,int>::iterator it,itlow,itup;
// mymap.insert(make_pair('a',1));
// mymap.insert(make_pair('b',11));
// mymap.insert(make_pair('c',1001));
// mymap.insert(make_pair('c',2002));
// mymap.insert(make_pair('d',10001));
// mymap.insert(make_pair('e',4));
// itlow=mymap.lower_bound('b');
// itup=mymap.upper_bound('d');

// for(it=itlow;it!=itup;it++) 
//     cout<<it->first<<">"<<it->second<<End;


// multimap<char,int> mymap;
// mymap.insert(make_pair('x',1));
// mymap.insert(make_pair('y',2));
// mymap.insert(make_pair('y',3));
// mymap.insert(make_pair('z',4));

// multimap<char,int>::value_compare mycmp=mymap.value_comp();

// multimap<char,int>::iterator it;

// it=mymap.begin();
// cout<<(--mymap.end())->first<<">"<<--mymap.end()->second<<End;
// pair<char,int> highest=* mymap.rbegin();
// do{
//     cout<<it->first<<">"<<it->second<<End;
// }while(mycmp(*it++,*(--mymap.end())));


//     return 0;
// }