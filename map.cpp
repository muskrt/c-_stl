// #include <iostream>
// #include <string>
// #include <map>
// using namespace std;

// const char* End{"\n"};


// int main(int argc,char **argv){

// map<int,char> mymap{{1,'a'},{2,'b'},{3,'c'}};

// mymap[4]='z';
// mymap[5]='e';
// mymap.insert({20,'y'});

// auto it=mymap.find(2);
//cout<<(it==mymap.end()? "not found":("found "+to_string(it->first)+":"+char(it->second)));

//for(pair<int,char> x: mymap) cout<<x.first<<":"<<x.second<<End;

// map<string,int> mymap{
//     {"A",0},
//     {"B",0},
//     {"C",0}
// };
// mymap.at("A")=10;
// mymap.at("B")=20;
// mymap.at("C")=30;
// for(auto& x: mymap) cout<<x.first<<" "<<x.second<<End;
// map<char,int> mymap;
// mymap['b']=100;
// mymap['a']=200;
// mymap['c']=300;
// for(auto& x: mymap) cout<<x.first<<" "<<x.second<<End;
// map<char,int> mymap;
// mymap['x']=100;
// mymap['y']=200;
// mymap['z']=300;
// for(auto& x: mymap) cout<<x.first<<" "<<x.second<<End;
// mymap.clear();
// mymap['a']=1;
// mymap['b']=2;
// for(auto& x: mymap) cout<<x.first<<" "<<x.second<<End;

// map<char,int> mymap;
// mymap['a']=1;
// mymap['c']=2;
// mymap['f']=3;
// for(char c='a';c<'h';c++){

// cout<<c;
// cout<<(mymap.count(c)>0? " is element of map": " is not element of map")<<End;



// }


// map<char,int> mymap;
// mymap.emplace('x',100);
// mymap.emplace('y',200);
// mymap.emplace('z',100);

// for(auto& x: mymap) cout<<x.first<<":"<<x.second<<End;

  
// map<char,int> mymap;
// auto it=mymap.end();

// it=mymap.emplace_hint(it,'b',10);
// mymap.emplace_hint(it,'a',12);
// mymap.emplace_hint(it,'c',23);
// for(auto& x: mymap) cout<<char(x.first)<<" "<<x.second<<End;

// map<char,int> mymap;
// mymap['a']=10;
// mymap['b']=20;
// mymap['c']=30;
// while(!mymap.empty()){
//     cout<<mymap.begin()->first<<" "<< mymap.begin()->second<<End;
//     mymap.erase(mymap.begin());
// }

// map<char,int> mymap;
// mymap['a']=10;
// mymap['b']=20;
// mymap['c']=30;
// map<char,int>::iterator IT;
// pair<map<char,int>::iterator,map<char,int>::iterator> ret;
// ret=mymap.equal_range('b');
// cout<<"lower bound"<<"=>"<<ret.first->second<<End;
// cout<<"upper bound"<<"=>"<<ret.second->second<<End;
// map<char,int> mymap;
// map<char,int>::iterator it;
// mymap['a']=10;
// mymap['b']=20;
// mymap['c']=30;
// mymap['d']=40;
// mymap['e']=50;
// mymap['f']=60;
// it=mymap.find('b');
// mymap.erase(it);
// mymap.erase('c');
// it=mymap.find('e');
// mymap.erase(it,mymap.end());
// for(it=mymap.begin();it!=mymap.end();it++)
//     cout<<it->first<<"=>"<<it->second<<End;
// map<char,int> mymap;
// mymap.insert(pair<char,int>('a',100));
// mymap.insert({'z',200});

// pair<map<char,int>::iterator,bool> ret;
// ret=mymap.insert({'z',500});
// if(ret.second==false) cout<<"element z already exists"<<ret.first->second<<End;

// map<char,int>::iterator it=mymap.begin();
// mymap.insert(it,{'b',300});
// mymap.insert(it,{'c',400});

// map<char,int> my;
// my.insert(mymap.begin(),mymap.find('c'));

// for(auto& x: mymap) cout<<x.first<<" "<<x.second<<End;

// cout<<End;
// for(auto& x: my) cout<<x.first<<" "<<x.second<<End;


// map<char,int> mymap;
// map<char,int>::key_compare mycmp    = mymap.key_comp();
// mymap['a']=100;
// mymap['b']=200;
// mymap['c']=300;
// char highest=mymap.rbegin()->first;
// map<char,int>::iterator it=mymap.begin();

// do{

//     cout<<it->first<<"=>"<<it->second<<End;

// }while (mycmp((it++)->first,highest));

// map<char,int> mymap;
// map<char,int>::iterator itlow,itup;

// mymap['a']=20;
// mymap['b']=40;
// mymap['c']=60;
// mymap['d']=80;
// mymap['e']=100;
// itlow=mymap.lower_bound('b');
// itup=mymap.upper_bound('d');
// mymap.erase(itlow,itup);

// for(auto& x: mymap) 
//     cout<<x.first<<"=>"<<x.second<<End;
// int i;
// map<int,int> mymap;
// if(mymap.max_size()>1000){
//     for(i=0;i<1000;i++) mymap[i]=0;
// cout<<"contains 1000 values:";
// }
// else cout<<"cant hold 1000 values: ";

// map<char,int> first,second;
// first['x']=1;
// first['y']=2;
// first['z']=3;
// second=first;
// first=map<char,int>();
// cout<<"size of first: "<<first.size()<<End;
// cout<<"size of second: "<<second.size()<<End;


// map<char,int> foo,bar;
// foo['x']=1;
// foo['y']=2;

// bar['a']=11;
// bar['b']=22;
// bar['c']=33;
// swap(foo,bar);
// cout<<"foo contains: "; for(auto& x: foo) cout<<x.first<<"=>"<<x.second<<End;
// cout<<"bar contains: "; for(auto& x: bar) cout<<x.first<<"=>"<<x.second<<End;


// map<char,int> mymap;
// map<char,int>::iterator itlow,itup;

// mymap['a']=2;
// mymap['b']=4;
// mymap['c']=6;
// mymap['d']=8;
// mymap['e']=1;

// itlow=mymap.lower_bound('b');
// itup=mymap.upper_bound('d');
// mymap.erase(itlow,itup);

// for(auto& x: mymap) 
//     cout<<x.first<<"=>"<<x.second<<End;

// map<char,int> mymap;
// mymap['x']=1;
// mymap['y']=2;
// mymap['z']=3;

// pair<char,int> highest=*mymap.rbegin();
// map<char,int>::iterator it=mymap.begin();
// map<char,int>::value_compare mycmp=mymap.value_comp();
// do{
//     cout<<it->first<<"=>"<<it->second<<End;
// }while (mycmp(*it++,highest));




//     return 0;
// }


