// #include <iostream>
// #include <string>
// #include <typeinfo>
// #include <unordered_set>
// #include <iterator>
// #include <array>
// const char* End{"\n"};

// using namespace std;

// typedef unordered_set<string> stringset;


// template<class T>
// T cmerge(T a,T b){
//     T t{a}; t.insert(b.begin(),b.end()); return t;
// }
// int main(){

// unordered_set<string> first,second,third;
// first={"CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++"};
// second={"orange","pink","yellow"};
// third=cmerge(first,second);
// first=third;
// cout<<"first contains: "; for(const string& x: first){cout<<x<<' ';} cout<<End;
// cout<<"second contains: "; for(const string& x: second){cout<<x<<' ';} cout<<End;
// cout<<"third contains: "; for(const string& x: third){cout<<x<<' ';} cout<<End;

// unordered_set<string> myset;
// myset.rehash(12);
// myset.insert("A");
// myset.insert("B");
// myset.insert("C");
// myset.insert("D");
// myset.insert("E");
// cout<<"current bucket count: "<<myset.bucket_count()<<End;

// unordered_set<string> myset;
// myset.reserve(5);
// myset.insert("A");
// myset.insert("B");
// myset.insert("C");
// myset.insert("D");
// myset.insert("E");
// cout<<myset.bucket_count();
// for(unsigned i=0;i<myset.bucket_count();i++){
// cout<<"bucket#"<<i<<":";
// for(auto it=myset.begin(i);it!=myset.end(i);it++) cout<<*it<<' ';
// cout<<End;
// }
// cout<<End;
// unordered_set<string> 
// first{"A","B","C"},
// second{"a","b","c"};
// first.swap(second);

// cout<<"first: "; for(const string& x: first) {cout<<x<<' ';} cout<<End;
// cout<<"second: "; for(const string& x: second) {cout<<x<<' ';} cout<<End;


// unordered_set<string> myset{
// "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++","CSS","Java"

// };
// for(const string& x: myset) cout<<x<<' ';

// return 0;

// }


// int main(int argc, char **argv){

// unordered_set<string> myset{"yellow","green","blue"};
// array<string,2> myarray{"black","white"};
// string mystring{"red"};
// myset.insert(mystring);
// myset.insert(mystring+"dish");
// myset.insert(myarray.begin(),myarray.end());
// myset.insert({"CSS","HTML"});
// cout<<"myset contains: ";
// for(const string& x: myset) cout<<x<<' ';

// stringset myset;
// stringset::hasher fn=myset.hash_function();


// cout<<"hash of (that): "<<fn("that")<<End;
// cout<<"hash of (than): "<<fn("than")<<End;


// unordered_set<string> myset;
// bool case_insensitive=myset.key_eq()("checking","CHECKING");
// cout<<"myset.key_eq() is: ";
// cout<<(case_insensitive?" case insensitive":" case sensitive")<<End;
// unordered_set<string> myset{
//     "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++"
// };
// cout<<"size: "<<myset.size()<<End;
// cout<<"bucket_count: "<<myset.bucket_count()<<End;
// cout<<"load_factor: "<<myset.load_factor()<<End;
// cout<<"mas load_factor: "<<myset.max_load_factor();

// unordered_set<int> myset;
// cout<<"max_size"<<myset.max_size()<<End;
// cout<<"max_bucket_count: "<<myset.max_bucket_count()<<End;
// cout<<"max_load_factor: "<<myset.max_load_factor()<<End;

// unordered_set<string> myset{
// "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++"

// };
// // cout<<"current max_load_facto: "<<myset.max_load_factor()<<End;
// // cout<<"current size: "<<myset.size()<<End;
// // cout<<"current bucket_count: "<<myset.bucket_count()<<End;
// // cout<<"current load_factor: "<<myset.load_factor()<<End;
// // float z=myset.max_load_factor();
// // myset.max_load_factor(z/2.0);
// // cout<<"[max_load_factor halved]"<<End;
// // cout<<"new max_load_factor: "<<myset.max_load_factor()<<End;
// // cout<<"new size: "<<myset.size()<<End;
// // cout<<" new bucket_count:"<<myset.bucket_count()<<End;
// // cout<<"new load_factor: "<<myset.load_factor()<<End;
// cout<<"max size: "<<myset.max_size()<<End;
// cout<<"max_bucket_count: "<<myset.max_bucket_count()<<End;
// cout<<"max_load_factor: "<<myset.max_load_factor();
//     return 0;
// }


// int main(int argc,char **argv){
// unordered_set<string> myset={
//    "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++" 
// };
// for(auto it=myset.begin();it!=myset.end();it++) cout<<*it<<' ';
// cout<<End;
// cout<<"myset buckets: "<<End;;

// for(unsigned  i=0;i<myset.bucket_count();i++)
// {
// cout<<"bucket#"<<i<<"contains: ";
//     for(auto local_it=myset.begin(i);local_it!=myset.end(i);++local_it)
//         cout<<*local_it<<' ';

// cout<<End;

// }

// unordered_set<string> myset{"CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++" };


// for(const string& x: myset) 
//     cout<<x<<" is in bucket #"<<myset.bucket(x)<<End;

// int i=myset.bucket_count();
// cout<<i<<End;

// for(i=0;i<=11;i++){
//     cout<<i<<" # ";
//     for(auto it=myset.begin(i);it!=myset.end(i);++it)
//         cout<<*it<<' ';
//     cout<<End;
// }

// unordered_set<string> myset{
//     "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++" 
// };
// unsigned nbuckets=myset.bucket_count();

// cout<<"myset has "<<nbuckets<<"buckets:"<<End;
// for(unsigned i=0;i<nbuckets;i++)
// cout<<"bucket# "<<i<<" has "<<myset.bucket_size(i)<<End;
// unordered_set<string> myset{
//     "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++"
// };
// cout<<"myset contains: ";
// for(auto it=myset.cbegin();it!=myset.cend();it++)
// cout<<*it<<' ';
// cout<<End;
// for(unsigned i=0;i<myset.bucket_count();i++){
//     cout<<"bucket# "<<i<<"contains: ";
//     for(auto local_it=myset.cbegin(i);local_it!=myset.cend(i);
//     ++local_it)
//         cout<<*local_it<<' ';
//     cout<<End;
// }
// unordered_set<string> myset{
//      "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++" 
// };
// for(const string& x: myset) cout<<x<<' ';
// cout<<End;
// myset.clear();
// myset.insert("Css");
// myset.insert("css2");
// myset.insert("css3");
// cout<<"myset contains: ";
// for(const string& x: myset) cout<<x<<' ';
// unordered_set<string> myset{
// "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++"
// };
// for(auto& x: {"CSS","HTML","python","c++"}){
//     if(myset.count(x)>0)
//         cout<<"myset has "<<x<<End;
//     else
//         cout<<"myset has no "<<x<<End;
// }
// unordered_set<string> myset;
// myset.emplace("A");
// myset.emplace("B");
// myset.emplace("C");
// for(const string& x: myset) cout<<x<<' ';

// unordered_set<string> myset;
// myset.emplace_hint(myset.end(),"A");
// myset.emplace_hint(myset.begin(),"B");
// myset.emplace_hint(myset.end(),"C");
// for(const string& x: myset) cout<<x<<' ';

// unordered_set<string> first;
// unordered_set<string> second{"a","b","c"};
// cout<<"first "<<(first.empty()?" is emptry": " is not empty")<<End;
// cout<<"second "<<(second.empty()?" is emptry": " is not empty")<<End;

// unordered_set<string> myset{
//     "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++"
// };

// cout<<"myset contains: ";
// for(auto it=myset.begin();it!=myset.end();++it)
//     cout<<*it<<' ';
// cout<<End;
// cout<<"myset's buckets contain: "<<End;
// for(unsigned i=0;i<myset.bucket_count();++i){
//     cout<<"bucket# "<<i<<" contains: ";
//     for(auto local_it=myset.begin(i);local_it!=myset.end(i);local_it++)
//         cout<<*local_it<<' ';
//     cout<<End;
// }
// unordered_set<string> myset{
//     "CSS","HTML","CSS","Java","Javascript","CSS","SQL","Ruby","Python","C++"
// };
// auto myrange=myset.equal_range("CSS");
// cout<<*myrange.first<<"-"<<*myrange.second;
// while(myrange.first!=myrange.second){
//     cout<<*myrange.first++<<' ';
   
// }

// unordered_set<string> myset{

//    "CSS","HTML","Java","Javascript","SQL","Ruby","Python","C++"  
// };
// myset.erase(myset.begin());
// myset.erase("HTML");
// myset.erase(myset.find("Java"),myset.end());
// cout<<"myset contains: ";
// for(const string& x: myset) cout<<x<<' ';

// string input="Java";
// unordered_set<string>::iterator got=myset.find(input);
// int num=std::distance( myset.begin(),got);
// cout<<num;







//     return 0;
// }