//insertion or deletion is very costly in vectors
//lists store elements as a linked list therefore insertion/deletion is super easy

list<int> ls;
ls.push_back(2)//{2}
ls.emplace_back(4);//{2,4}
ls.push_front(5);//{5,2,4}
ls.emplace_front(4);//{4,5,2,4}

other functions like size,begin,insert same as vector 
