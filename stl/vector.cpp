step 1)declaration!!
vector<int> v; //creates an empty container!



v.push_back(1); //takes 1
v.emplace_back(2);//takes 2 is faster

vector+pairs
vector<pair<int,int>> vex;
vex.emplace_back(1,2);  //adds 1,2 to vex


//declaration+initialization
vector<int> v(5,100); //will store 100   five times
vector<int> v(5); //will make a vector of size 5(empty/garbage)

vector<int> v2(v1);  will copy v1 vector to v2

step 2)access

vector <int> v;
cout<<v[0];

another method using iterator!
  //can access similar to arrays ex v[2]

//iterator is to c++ what pointer is to c
vector < int > ::iterator it = v.begin(); //first element ke addresss pe point karega
vector<int >::iterator it=v.end();//points to adress after last element(weird butt okay)

v.back() //last element!

//*it will give element at it!

//auto ->automatically gives data type!
int a is same as auto a 
vector<int> ::iterator it     is same as    auto it

step 3)deleting 
v.erase(v.begin())//u gotta give an adress of element to be deleted
v.erase(v.begin(),v.begin()+4) //this deletes all elements from v.begin to v.begin+3
(weird butt okay)

step 4)insertion
 vector < int > v(2, 100); //{100,100)
    vector<int >copy(2,100);//{100,100)
    //insert
    v.insert(v.begin(), 200) //inserts 200 at the beginning (200,100,100)
    v.insert(v.begin(), 2, 100) //inserts 100 twice at the begining (100 ,100,200,100,100)
 
 v.insert(v.begin(),copy.begin(),copy.end());//inserts pura copy at the beinging of v
 
v.size//gives size of vector
 v1.swap(v2;)//swaps the vectors

