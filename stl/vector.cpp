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
cout<<v[0]
